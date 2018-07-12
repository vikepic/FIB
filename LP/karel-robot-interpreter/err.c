/*
 * A n t l r  S e t s / E r r o r  F i l e  H e a d e r
 *
 * Generated from: karel.g
 *
 * Terence Parr, Russell Quong, Will Cohen, and Hank Dietz: 1989-2001
 * Parr Research Corporation
 * with Purdue University Electrical Engineering
 * With AHPCRC, University of Minnesota
 * ANTLR Version 1.33MR33
 */

#define ANTLR_VERSION	13333
#include "pcctscfg.h"
#include "pccts_stdio.h"

#include <string>
#include <iostream>
#include <map>
using namespace std;

typedef struct {
  string kind;
  string text;
} Attrib;

void zzcr_attr(Attrib *attr, int type, char *text);
#define AST_FIELDS string kind; string text;
#include "ast.h"
#define zzcr_ast(as,attr,ttype,textt) as=createASTnode(attr,ttype,textt)
AST* createASTnode(Attrib* attr,int ttype, char *textt);
#define zzSET_SIZE 8
#include "antlr.h"
#include "ast.h"
#include "tokens.h"
#include "dlgdef.h"
#include "err.h"

ANTLRChar *zztokens[35]={
	/* 00 */	"Invalid",
	/* 01 */	"@",
	/* 02 */	"WORLD",
	/* 03 */	"ROBOT",
	/* 04 */	"WALLS",
	/* 05 */	"BEEPERS",
	/* 06 */	"ISCLEAR",
	/* 07 */	"ANYBEEPERS",
	/* 08 */	"TURNLEFT",
	/* 09 */	"MOVE",
	/* 10 */	"PUTBEEPER",
	/* 11 */	"PICKBEEPER",
	/* 12 */	"FOUNDBEEPER",
	/* 13 */	"ITERATE",
	/* 14 */	"DEFINE",
	/* 15 */	"BEGIN",
	/* 16 */	"END",
	/* 17 */	"TURNOFF",
	/* 18 */	"IF",
	/* 19 */	"AND",
	/* 20 */	"OR",
	/* 21 */	"NOT",
	/* 22 */	"RIGHT",
	/* 23 */	"LEFT",
	/* 24 */	"UP",
	/* 25 */	"DOWN",
	/* 26 */	"ID",
	/* 27 */	"NUM",
	/* 28 */	"LCLA",
	/* 29 */	"RCLA",
	/* 30 */	"LBRA",
	/* 31 */	"RBRA",
	/* 32 */	"COMMA",
	/* 33 */	"SEMI",
	/* 34 */	"SPACE"
};
SetWordType setwd1[35] = {0x0,0x1,0x0,0x2,0x6c,0x6c,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe4,
	0xf4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0};
SetWordType zzerr1[8] = {0x0,0xf,0x2,0x4, 0x0,0x0,0x0,0x0};
SetWordType zzerr2[8] = {0x0,0x20,0x4,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr3[8] = {0x0,0x0,0x18,0x0, 0x0,0x0,0x0,0x0};
SetWordType setwd2[35] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x73,0x73,0x73,0x73,0x0,0x75,0x0,
	0x0,0x78,0x73,0x75,0x80,0x80,0x0,0x0,
	0x0,0x0,0x0,0x73,0x0,0x0,0x0,0x0,
	0x78,0x0,0x0,0x0};
SetWordType zzerr4[8] = {0xc0,0x10,0x20,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr5[8] = {0xc0,0x10,0x0,0x0, 0x0,0x0,0x0,0x0};
SetWordType zzerr6[8] = {0x0,0x0,0xc0,0x3, 0x0,0x0,0x0,0x0};
SetWordType setwd3[35] = {0x0,0x0,0x0,0x0,0x10,0x10,0x2,
	0x2,0x8,0x8,0x8,0x8,0x2,0x8,0x10,
	0x10,0x8,0x8,0x8,0x4,0x4,0x0,0x0,
	0x0,0x0,0x0,0x8,0x0,0x0,0x10,0x5,
	0x8,0x10,0x0,0x0};