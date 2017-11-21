%{
// $Id: parser.y,v 1.11 2017-10-11 14:27:30-07 - - $
// Dummy parser for scanner project.

#include <cassert>

#include "lyutils.h"
#include "astree.h"

%}

%debug
%defines
%error-verbose
%token-table
%verbose

%token ROOT

%destructor { destroy ($$); } <>
%printer { astree::dump (yyoutput, $$); } <>

%initial-action {
   parser::root = new astree (ROOT, {0, 0, 0}, "<<ROOT>>");
}


%token TOK_VOID TOK_CHAR TOK_INT TOK_STRING
%token TOK_IF TOK_ELSE TOK_WHILE TOK_RETURN TOK_STRUCT
%token TOK_NULL TOK_NEW TOK_ARRAY
%token TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE
%token TOK_IDENT TOK_INTCON TOK_CHARCON TOK_STRINGCON

%token TOK_BLOCK TOK_CALL TOK_IFELSE TOK_INITDECL
%token TOK_POS TOK_NEG TOK_NEWARRAY TOK_TYPEID TOK_FIELD
%token TOK_ORD TOK_CHR TOK_ROOT

%token TOK_FUNCTION TOK_PARAMLIST TOK_PROTOTYPE TOK_NEWSTRING
%token TOK_INDEX TOK_DECLID TOK_RETURNVOID TOK_VARDECL

%right TOK_IF TOK_ELSE
%right '='
%left TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE
%left '+' '-'
%left '*' '/' '%'
%right TOK_POS TOK_NEG '!' TOK_NEW
%left '[' TOK_FIELD TOK_FUNCTION '.'

%nonassoc '('





%start start

%%

//--------------Program Rules------------

start   : program           { $$ = parser::root = $1; }
        ;
        
program : program structdef { $$ = $1->adopt($2); }
        | program function  { $$ = $1->adopt($2); }
        | program statement { $$ = $1->adopt($2); }
        | program error '}' { $$ = $1; destroy($3);}
        | program error ';' { $$ = $1; destroy($3);}
        |                   {$$ = parser::root; }
        ;
        
structdef   : struct2 '}' 
                { 
                    $$ = $1; 
                    destroy($2);
                }
            ;
          
struct2     : struct2 fielddecl ';' 
                { 
                    $$ = $1->adopt($2); 
                    destroy($3);
                    
                }
            | TOK_STRUCT TOK_IDENT '{' 
                {
                    $2->symbol = TOK_TYPEID; 
                    $$ = $1->adopt($2); 
                    destroy($3);
                }
            ;

fielddecl   : basetype TOK_IDENT
                {
                    $2->symbol = TOK_FIELD;
                    $$ = $1->adopt($2);
                }
            | basetype TOK_ARRAY TOK_IDENT
                {
                    $3->symbol = TOK_FIELD;
                    $$ = $2->adopt($1, $3);
                }
            ;
            
basetype    : TOK_VOID      { $$ = $1; }
            | TOK_INT       { $$ = $1; }
            | TOK_STRING    { $$ = $1; }
            | TOK_IDENT     { $1->symbol = TOK_TYPEID; $$ = $1; }
            ;

function    : identdecl funcparams ')'  block
                {
                    $$ = new astree(TOK_FUNCTION, $1->lloc, "");
                    $$ = $$->adopt($1, $2);
                    $$ = $$->adopt($4);
                    destroy($3);
                }
            | identdecl funcparams ')' ';'
                {
                    $$ = new astree(TOK_PROTOTYPE, $1->lloc, "");
                    $$ = $$->adopt($1, $2);
                    destroy($3, $4);
                }
            | identdecl '(' ')' block
                {
                    $2->symbol = TOK_PARAMLIST;
                    $$ = new astree(TOK_FUNCTION, $1->lloc, "");
                    $$ = $$->adopt($1, $2);
                    $$ = $$->adopt($4);
                    destroy($3);
                }
            | identdecl '(' ')' ';'
                {
                    $2->symbol = TOK_PARAMLIST;
                    $$ = new astree(TOK_PROTOTYPE, $1->lloc, "");
                    $$ = $$->adopt($1, $2);
                    destroy($3, $4);
                }
            ;
            
funcparams  : '(' identdecl
                {
                    $1->symbol = TOK_PARAMLIST;
                    $$ = $1->adopt($2);
                }
            | funcparams ',' identdecl
                {
                    $$ = $1->adopt($3);
                    destroy($2);
                }
            ;
                    
identdecl   : basetype TOK_IDENT
                {
                    $2->symbol = TOK_DECLID;
                    $$ = $1->adopt($2);
                }
            | basetype TOK_ARRAY TOK_IDENT
                {
                    $3->symbol = TOK_DECLID;
                    $$ = $2->adopt($1, $3);
                }
            ;

block       : blockbody '}'
                {
                    $1->symbol = TOK_BLOCK;
                    $$ = $1;
                    destroy($2);
                }
            ;
            
blockbody   : blockbody statement 
                {
                    $$ = $1->adopt($2);
                }
            | '{' statement
                {
                    $1->symbol = TOK_BLOCK;
                    $$ = $1->adopt($2);
                }
            ;
                  
statement   : block     { $$ = $1; }
            | vardecl   { $$ = $1; }
            | while     { $$ = $1; }
            | ifelse    { $$ = $1; }
            | return    { $$ = $1; }
            | expr ';'  { $$ = $1; destroy($2); }
            ;

vardecl     : identdecl '=' expr ';'
                {
                    $2->symbol = TOK_VARDECL;
                    $$ = $2->adopt($1, $3);
                    destroy($4);
                }
            ;

while       : TOK_WHILE '(' expr ')' statement
                {
                    $$ = $1->adopt($3, $5);
                    destroy($2, $4);
                }
            ;
            
ifelse      : TOK_IF '(' expr ')' statement %prec TOK_ELSE
                {
                    $$ = $1->adopt($3, $5);
                    destroy($2, $4);
                }
            | TOK_IF '(' expr ')' statement TOK_ELSE statement
                {
                    $$ = $1->adopt($3, $5);
                    $7->symbol = TOK_IFELSE;
                    $$ = $1->adopt($7);
                    destroy($2, $4);
                    destroy($6);
                }
            ;
        
return      : TOK_RETURN expr ';'
                {
                    $$ = $1->adopt($2);
                    destroy($3);
                }
            | TOK_RETURN ';'
                {
                    $1->symbol = TOK_RETURNVOID;
                    $$ = $1;
                    destroy($2);
                }
            ;
          
expr        : expr TOK_EQ expr          { $$ = $2->adopt($1, $3); }
            | expr TOK_NE expr          { $$ = $2->adopt($1, $3); }
            | expr TOK_LT expr          { $$ = $2->adopt($1, $3); }
            | expr TOK_LE expr          { $$ = $2->adopt($1, $3); }
            | expr TOK_GT expr          { $$ = $2->adopt($1, $3); }
            | expr TOK_GE expr          { $$ = $2->adopt($1, $3); }
            | expr '+' expr             { $$ = $2->adopt($1, $3); }
            | expr '-' expr             { $$ = $2->adopt($1, $3); }
            | expr '*' expr             { $$ = $2->adopt($1, $3); }
            | expr '/' expr             { $$ = $2->adopt($1, $3); }
            | expr '=' expr             { $$ = $2->adopt($1, $3); }
            | expr '%' expr             { $$ = $2->adopt($1, $3); }
            | '+' expr %prec TOK_POS    
                                { $$ = $1->adopt_sym($2, TOK_POS); }
            | '-' expr %prec TOK_NEG    
                                { $$ = $1->adopt_sym($2, TOK_NEG); }
            | '!' expr                  { $$ = $1->adopt($2); }
            | allocator                 { $$ = $1; }
            | call                      { $$ = $1; }
            | '(' expr ')'              { $$ = $2; destroy($1, $3); }
            | variable                  { $$ = $1; }
            | constant                  { $$ = $1; }
            ;
            
 allocator  : TOK_NEW TOK_IDENT '(' ')'
                {
                    $2->symbol = TOK_TYPEID;
                    $$ = $1->adopt($2);
                    destroy($3, $4);
                }
            | TOK_NEW TOK_STRING '(' expr ')'
                {
                    $1->symbol = TOK_NEWSTRING;
                    $$ = $1->adopt($4);
                    destroy($3, $5);
                    destroy($2);
                }
            | TOK_NEW basetype '[' expr ']'
                {
                    $1->symbol = TOK_NEWARRAY;
                    $$ = $1->adopt($2, $4);
                    destroy($3, $5);
                }
            ;
            
 call       : TOK_IDENT '(' ')'
                {
                    $2->symbol = TOK_CALL;
                    $$ = $2->adopt($1);
                    destroy($3);
                }
            | callexprs ')'
                {
                    $$ = $1;
                    destroy($2);
                }
            ;

callexprs   : TOK_IDENT '(' expr
                {
                    $$ = $1->adopt($3);
                    destroy($2);
                }
            | callexprs ',' expr
                {
                    $2->symbol = TOK_CALL;
                    $$ = $2->adopt($1, $3);
                }
            ;

variable    : TOK_IDENT %prec '['
                {
                    $$ = $1;
                }
            | expr '[' expr ']'
                {
                    $2->symbol = TOK_INDEX;
                    $$ = $2->adopt($1, $3);
                    destroy($4);
                }
            | expr '.' TOK_IDENT
                {
                    $3->symbol = TOK_FIELD;
                    $$ = $2->adopt($1, $3);
                }
            ;

constant    : TOK_INTCON    { $$ = $1; }
            | TOK_CHARCON   { $$ = $1; }
            | TOK_STRINGCON { $$ = $1; }
            | TOK_NULL      { $$ = $1; }
            ;
            
%%




const char *parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}


bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

/*
static void* yycalloc (size_t size) {
   void* result = calloc (1, size);
   assert (result != nullptr);
   return result;
}
*/


