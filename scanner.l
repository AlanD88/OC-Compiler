/* $Id: lexer.l,v 1.7 2016-10-27 19:45:59-07 - - $ */

%{

#include "lyutils.h"


#define YY_USER_ACTION  { lexer::advance(); }

int yylval_token (int symbol) {
   yylval = new astree (symbol, lexer::lloc, yytext);
   
   
   fprintf(tok_file, "%5zu 2%zu.%03zu %4u %-15s (%s)\n", 
   yylval->lloc.filenr, yylval->lloc.linenr, yylval->lloc.offset, 
   yylval->symbol, parser::get_tname(yylval->symbol), 
   yylval->lexinfo->c_str());
   return symbol;
}

%}

%option 8bit
%option debug
%option nodefault
%option noinput
%option nounput
%option noyywrap
%option warn
/*%option verbose*/

LETTER          [A-Za-z_]
DIGIT           [0-9]
MANTISSA        ({DIGIT}+\.?{DIGIT}*|\.{DIGIT}+)
EXPONENT        ([Ee][+-]?{DIGIT}+)
NUMBER          ({MANTISSA}{EXPONENT}?)
NOTNUMBER       ({MANTISSA}[Ee][+-]?)

IDENT           ({LETTER}({LETTER}|{DIGIT})*)
INTCON          ({DIGIT}+)
STRINGCON       (\"([^\\"\n]|\\[\\'"0nt])*\")
CHARCON         ('([^\\'\n]|\\[\\'"0nt])')
INVSTRING       (\"([^\\"\n]|\\[\\'"0nt])*)
INVIDENT        (({DIGIT}+){IDENT})
INVCHAR         ('([^'\n]*)['\n])

%%

"#".*           { lexer::include(); }
[ \t]+          { }
\n              { lexer::newline(); }

"[]"            { return yylval_token (TOK_ARRAY); }
"+"             { return yylval_token ('+'); }
"-"             { return yylval_token ('-'); }
"*"             { return yylval_token ('*'); }
"/"             { return yylval_token ('/'); }
"%"             { return yylval_token ('%'); }
"!"             { return yylval_token ('!'); }
"="             { return yylval_token ('='); }
"<"             { return yylval_token (TOK_LT); }
">"             { return yylval_token (TOK_GT); }
","             { return yylval_token (','); }
"."             { return yylval_token ('.'); }
";"             { return yylval_token (';'); }
"("             { return yylval_token ('('); }
")"             { return yylval_token (')'); }
"["             { return yylval_token ('['); }
"]"             { return yylval_token (']'); }
"{"             { return yylval_token ('{'); }
"}"             { return yylval_token ('}'); }

"=="            { return yylval_token (TOK_EQ); }
"!="            { return yylval_token (TOK_NE); }
"<="            { return yylval_token (TOK_LE); }
">="            { return yylval_token (TOK_GE); }

"void"          { return yylval_token (TOK_VOID); }
"char"          { return yylval_token (TOK_CHAR); }
"int"           { return yylval_token (TOK_INT); }
"string"        { return yylval_token (TOK_STRING); }
"if"            { return yylval_token (TOK_IF); }
"else"          { return yylval_token (TOK_ELSE); }
"while"         { return yylval_token (TOK_WHILE); }
"return"        { return yylval_token (TOK_RETURN); }
"struct"        { return yylval_token (TOK_STRUCT); }
"null"          { return yylval_token (TOK_NULL); }
"new"           { return yylval_token (TOK_NEW); }

{CHARCON}       { return yylval_token (TOK_CHARCON); }
{STRINGCON}     { return yylval_token (TOK_STRINGCON); }
{INTCON}        { return yylval_token (TOK_INTCON); }
{IDENT}         { return yylval_token (TOK_IDENT); }
{INVIDENT}      { lexer::badtoken(yytext); }
{INVSTRING}     { lexer::badtoken(yytext); }
{INVCHAR}       { lexer::badtoken(yytext); }
.               { lexer::badchar (*yytext); }

%%

