#ifndef __symtable_h__
#define __symtable_h__

#include <vector>
#include <unordered_map>
#include <string>
#include <utility>
#include <bitset>

#include "astree.h"
using namespace std;

struct symbol;

// enum defining attribute values
enum {ATTR_void, ATTR_int, ATTR_null, ATTR_string,
      ATTR_struct, ATTR_aray, ATTR_function, ATTR_variable,
      ATTR_field, ATTR_typeid, ATTR_param, ATTR_lval, 
      ATTR_const, ATTR_vreg, ATTR_vaddr, ATTR_bitset_size
};


using attr_bitset = bitset<ATTR_bitset_size>;
using symbol_table = unordered_map<string*, symbol*>;
using symbol_entry = pair<string*, symbol*>;

struct symbol {
    attr_bitset attributes;  
    symbol_table* fields;   
    size_t filenr;
    size_t linenr;
    size_t offset;
    size_t block_nr;
    vector<symbol*>* parameters;
};

symbol* new_symbol(astree* node);
void symtable_insert(symbol_table* st, astree* node);
symbol* search_symtable(symbol_table* st, astree* node);
void dump(symbol_table* st);


#endif