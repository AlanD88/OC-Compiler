/*
Alan Duncan
CMPS 104a Fall 2017
Assign 1
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


const string CPP = "/usr/bin/cpp -nostdinc";
constexpr size_t LINESIZE = 1024;

// Chomp the last character from a buffer if it is delim.
void chomp (char* string, char delim) {
   size_t len = strlen (string);
   if (len == 0) return;
   char* nlpos = string + len - 1;
   if (*nlpos == delim) *nlpos = '\0';
}


// Run cpp against the lines of the file.
void cpplines (FILE* pipe, const char* filename) {
   int linenr = 1;
   char inputname[LINESIZE];
   strcpy (inputname, filename);
   for (;;) {
      char buffer[LINESIZE];
      char* fgets_rc = fgets (buffer, LINESIZE, pipe);
      if (fgets_rc == nullptr) break;
      chomp (buffer, '\n');
      //printf ("%s:line %d: [%s]\n", filename, linenr, buffer);
      // http://gcc.gnu.org/onlinedocs/cpp/Preprocessor-Output.html
      int sscanf_rc = sscanf (buffer, "# %d \"%[^\"]\"",
                              &linenr, inputname);
      if (sscanf_rc == 2) {
         //printf ("DIRECTIVE: line %d file \"%s\"\n", linenr, 
         //inputname);
         continue;
      }
      char* savepos = nullptr;
      char* bufptr = buffer;
      for (int tokenct = 1;; ++tokenct) {
         char* token = strtok_r (bufptr, " \t\n", &savepos);
         bufptr = nullptr;
         if (token == nullptr) break;
         //printf ("token %d.%d: [%s]\n",
                 //linenr, tokenct, token);
                string_set::intern(token);
      }
      ++linenr;
   }
}

int main (int argc, char** argv) {
    
   exec::execname = basename (argv[0]);
   const char* execname = basename (argv[0]); 
   int exit_status = EXIT_SUCCESS;
   int options = 0;
   yy_flex_debug = 0;
   yydebug = 0;
   
   
   FILE* str_file;
   FILE* tok_file;
   

   string out_filename = argv[argc - 1];
   char* filename = argv[argc - 1];

   string command = CPP + " " + filename;
    
   // Check if file extension is .oc
   int pos = out_filename.find_last_of(".");
   
   if (pos != -1 && out_filename.substr(pos) == ".oc"){
        //Process Options 
        while ((options = getopt (argc, argv, "l:y:D:@")) != -1){
            switch (options){
                case 'l':
                {
                    yy_flex_debug = 1;
                    break;
                }
                case 'y':
                {
                    yydebug = 1;
                    break;
                }
                case '@':
                {
                    set_debugflags(optarg);
                    break;
                }
                case 'D':
                {
                    command = CPP + " -D" + optarg + " " + filename;
                    break;
                }
            }
        }
    }else{
        cerr << "Incorrect file type.  Please use .oc file types only"
        << endl;
        return EXIT_FAILURE;
    }
    //Change pipe to yyin
   FILE* yyin = popen (command.c_str(), "r");
      if (yyin == nullptr) {
         exit_status = EXIT_FAILURE;
         fprintf (stderr, "%s: %s: %s\n",
                  execname, command.c_str(), strerror (errno));
      }else {
         //cpplines (yyin, filename);
         while (yylex() != YYEOF){
        }
         int pclose_rc = pclose (yyin);
         eprint_status (command.c_str(), pclose_rc);
         if (pclose_rc != 0) exit_status = EXIT_FAILURE;
      }
      

    string base_filename;
    base_filename = string(basename(filename));
    //write to program.str
    size_t len = base_filename.length();
    string str_outfile = base_filename.substr(0, len-3) + ".str";
    string tok_outfile = base_filename.substr(0, len-3) + ".tok";
   

    str_file = fopen(str_outfile.c_str(),"w");
    tok_file = fopen(tok_outfile.c_str(), "w");
    
    if(str_file != NULL){
        string_set::dump(str_file);
        fclose(str_file);
    } 
    if(tok_file == NULL){
        cerr << "Failed to open tok_file";
        return 1;
    }
   fclose(tok_file);
   return exit_status;
}
