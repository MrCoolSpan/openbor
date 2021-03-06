/*
 * OpenBOR - http://www.LavaLit.com
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

#ifndef STACKEDSYMBOLTABLE_H
#define STACKEDSYMBOLTABLE_H

#include "SymbolTable.h"
#include "Stack.h"
typedef struct StackedSymbolTable {
	Stack SymbolTableStack;
	char name[MAX_STR_LEN + 1];
} StackedSymbolTable;

void StackedSymbolTable_Init(StackedSymbolTable * sstable, const char* theName);
void StackedSymbolTable_Clear(StackedSymbolTable * sstable);
void StackedSymbolTable_PushScope(StackedSymbolTable * sstable, const char* scopeName);
SymbolTable *StackedSymbolTable_TopScope(StackedSymbolTable * sstable);
void StackedSymbolTable_PopScope(StackedSymbolTable * sstable);
bool StackedSymbolTable_FindSymbol(StackedSymbolTable * sstable, const char* symbolName, Symbol ** pp_theSymbol);
void StackedSymbolTable_AddSymbol(StackedSymbolTable * sstable, Symbol * p_theSymbol);
#endif
