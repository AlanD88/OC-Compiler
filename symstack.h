#ifndef __symstack_h__
#define __symstack_h__

#include "symtable.h"

extern size_t next_block;

class symbol_stack {
    public:
        vector<size_t> block_stack;
        vector<symbol_table*> symbol_stack;
        void enter_block();
        void leaving_block();
};

#endif