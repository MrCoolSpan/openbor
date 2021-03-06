/*
 * OpenBOR - http://www.LavaLit.com
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "depends.h"
#include "Lexer.h"
#include "List.h"
#include "SolidList.h"
#include "ScriptVariant.h"

typedef const char* Label;

typedef enum OpCode { CONSTSTR, CONSTDBL, CONSTINT, LOAD, SAVE, INC, DEC, FIELD, CALL, POS, NEG,
	NOT, MUL, DIV, MOD, ERR, ADD, SUB, JUMP, GE, LE, LT, GT, EQ, NE, OR,
	AND, NOOP, PUSH, POP, Branch_FALSE, Branch_TRUE, DATA, PARAM,
	IMMEDIATE, DEFERRED, RET, CHECKARG, CLEAN, JUMPR
} OpCode;

typedef struct Instruction {
	OpCode OpCode;
	Token *theToken;
	char *Label;		//[MAX_STR_LEN+1];
	ScriptVariant *theVal;
	ScriptVariant *theVal2;
	ScriptVariant *theRef;
	ScriptVariant *theRef2;
	List *theRefList;
	SolidList *theSolidListOfRefList;
	 s32(*functionRef) (ScriptVariant **, ScriptVariant **, int);
	union {
		int theJumpTargetIndex;
		struct Instruction **ptheJumpTarget;
		//struct Instruction* theJumpTarget;
	};
} Instruction;


void Instruction_InitViaToken(Instruction * pins, OpCode code, Token * pToken);
void Instruction_InitViaLabel(Instruction * pins, OpCode code, const char* label);
void Instruction_Init(Instruction * pins);
void Instruction_Clear(Instruction * pins);

void Instruction_NewData(Instruction * pins);
void Instruction_NewData2(Instruction * pins);
void Instruction_ConvertConstant(Instruction * pins);

void Instruction_ToString(Instruction * pins, char* strRep);
#endif
