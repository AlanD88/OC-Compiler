/*
Alan Duncan
CMPS 104a Fall 2017
Assign 2
*/


// $Id: cppstrtok.cpp,v 1.8 2017-09-21 15:51:23-07 - - $

// Use cpp to scan a file and print line numbers.
// Print out each input line read in, then strtok it for
// tokens.

#include <string>
#include <iostream>
//#include <fstream>
#include <vector>
using namespace std;

#include <errno.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wait.h>
#include <unistd.h>

#include "string_set.h"
#include "auxlib.h"
#include "astree.h"
#include "lyutils.h"

//const string CPP = "/usr/bin/cpp -nostdinc";
//constexpr size_t LINESIZE = 1024;

char* filename;
const string cpp_name = "/usr/bin/cpp -nostdinc";
string cpp_command;

FILE* tok_file;

void cpp_popen (const char* filename) {
    cpp_command = cpp_name + " " + filename;
    yyin = popen(cpp_command.c_str(), "r");
    if (yyin == nullptr) {
        syserrprintf (cpp_command.c_str());
        exit (exec::exit_status);
    }else {
        if (yy_flex_debug) {
            fprintf (stderr, "-- popen(%s), fileno(yyin) = %d\n",
            cpp_command.c_str(), fileno (yyin));
        }
        lexer::newfilename(cpp_command);
    }
}

void cpp_pclose() {
    int pclose_rc = pclose (yyin);
    eprint_status (cpp_command.c_str(), pclose_rc);
    if (pclose_rc != 0) exec::exit_status = EXIT_FAILURE;
}

int scan_opts (int argc, char** argv) {
   opterr = 0;
   yy_flex_debug = 0;
   yydebug = 0;
   lexer::interactive = isatty (fileno (stdin))
                    and isatty (fileno (stdout));
   for(;;) {
      int opt = getopt (argc, argv, "@:ly");
      if (opt == EOF) break;
      switch (opt) {
         case '@': set_debugflags (optarg);   break;
         case 'l': yy_flex_debug = 1;         break;
         case 'y': yydebug = 1;               break;
         //case 'D': cpp_command = CPP + " -D" + optarg + 
         //" " + filename;
         default:  errprintf ("bad option (%c)\n", optopt); break;
      }
   }
   if (optind > argc) {
      errprintf ("Usage: %s [-ly] [filename]\n",
                 exec::execname.c_str());
      exit (exec::exit_status);
   }
   //const char* filename = optind == argc ? "-" : argv[optind];
   //cpp_popen (filename);
   
   return optind;
}

void create_astree(string astFilename){
    FILE* ast_file = fopen (astFilename.c_str(), "w");
    
    astree::print(ast_file, parser::root);
    delete parser::root;
    
    if (ast_file == NULL) {
        cerr << "Failed to open ast_file.\n";
    }
    
    fclose(ast_file);

}
void create_str(string strFile){
    FILE* str_file = fopen(strFile.c_str(),"w");
    
    if(str_file != NULL){
        string_set::dump(str_file);
        fclose(str_file);
    } 
}

int main (int argc, char** argv) {
   exec::execname = basename (argv[0]);
   //const char* execname = basename (argv[0]); 
   int exit_status = EXIT_SUCCESS;
   int optindex = 0;
   yy_flex_debug = 0;
   yydebug = 0;
   
   string out_filename = argv[argc - 1];

   // Check if file extension is .oc
   int pos = out_filename.find_last_of(".");
   
   //cout << "read all variable" << endl;
   
   if (pos != -1 && out_filename.substr(pos) == ".oc"){
        //Process Options 
        optindex = scan_opts(argc, argv);
    }else{
        cerr << "Incorrect file type.  Please use .oc file types only"
        << endl;
        return EXIT_FAILURE;
    }
    
    //filename = optind == argc ? "-" : argv[optindex];
    filename = argv[optindex];
    
        
    string base_filename;
    base_filename = string(basename(filename));
    //write to program.str
    size_t len = base_filename.length();
    string str_outfile = base_filename.substr(0, len-3) + ".str";
    string tok_outfile = base_filename.substr(0, len-3) + ".tok";
    string ast_outfile = base_filename.substr(0, len-3) + ".ast";
   

    tok_file = fopen(tok_outfile.c_str(), "w");
    
    if(tok_file == NULL){
        cerr << "Failed to open tok_file\n";
        return 1;
    }   
    cpp_popen(filename);
    
    int parse_rc = yyparse();
    if (parse_rc) {
        errprintf ("parse failed (%d)\n", parse_rc);
    }
    else{
        create_astree(ast_outfile);
    }
    create_str(str_outfile);
    
   cpp_pclose();
   yylex_destroy();
     
   fclose(tok_file);
      
   return exit_status;
}
