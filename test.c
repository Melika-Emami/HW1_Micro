#include "test.h"

void add (uint16_t *a, uint16_t *b, uint16_t *c)
{
	(*c) = (*a) + (*b);
}

__asm void MUL_4(int32_t *a, int32_t *b, int32_t *c){
				LDR      r0,[r0,#0]
        LDR      r1,[r1,#0]
        MULS     r0,r1,r0
        STR      r0,[r2,#0]
        BX       lr
}
__asm void SUM_4(int32_t *a, int32_t *b, int32_t *c){
				
				LDR      r0,[r0,#0]
        LDR      r1,[r1,#0]
        ADD      r0,r0,r1
        STR      r0,[r2,#0]
        BX       lr
}

__asm void MIN_4(int32_t *a, int32_t *b, int32_t *c){
				LDR      r0,[r0,#0]
        LDR      r1,[r1,#0]
        SUB      r0,r0,r1
        STR      r0,[r2,#0]
        BX       lr
}

__asm void DIV_4(int32_t *a, int32_t *b, int32_t *c){
				LDR      r0,[r0,#0]
        LDR      r1,[r1,#0]
        UDIV      r0,r0,r1
        STR      r0,[r2,#0]
        BX       lr
}


/*
__asm void MUL_9(int32_t *a, int32_t *b, int32_t *c)
{
	LDR      r3,[r0,#0]
	LDR      r4,[r0,#4]
	LDR      r5,[r0,#8]
	LDR      r6,[r1,#0]
	LDR      r7,[r1,#4]
	LDR      r8,[r1,#8]
	ADDS		 r3,r3,r6
	ADCS		 r4,r4,r7
	ADCS		 r5,r5,r8
	STR			 r3,[r2,#0]
	STR			 r4,[r2,#4]
	STR			 r5,[r2,#8]
}*/

__asm void SUM_9(int32_t *a, int32_t *b, int32_t *c)
{
	LDR      r3,[r0,#0]
	LDR      r4,[r0,#4]
	LDR      r5,[r0,#8]
	LDR      r6,[r1,#0]
	LDR      r7,[r1,#4]
	LDR      r8,[r1,#8]
	ADDS		 r3,r3,r6
	ADCS		 r4,r4,r7
	ADCS		 r5,r5,r8
	STR			 r3,[r2,#0]
	STR			 r4,[r2,#4]
	STR			 r5,[r2,#8]
}


__asm void MIN_9(int32_t *a, int32_t *b, int32_t *c)
{
	LDR      r3,[r0,#0]
	LDR      r4,[r0,#4]
	LDR      r5,[r0,#8]
	LDR      r6,[r1,#0]
	LDR      r7,[r1,#4]
	LDR      r8,[r1,#8]
	SUB		   r3,r3,r6
	SBC			 r4,r4,r7
	SBC			 r5,r5,r8
	STR			 r3,[r2,#0]
	STR			 r4,[r2,#4]
	STR			 r5,[r2,#8]
}

__asm void MAC_4(int32_t *a, int32_t *b, int32_t *c)
{
	LDRH		r3,[r0,#0]
	LDRH		r4,[r0,#2]
	LDRH		r5,[r1,#0]
	LDRH		r6,[r1,#2]
	MUL			r3,r5,r3
	MUL			r4,r6,r4
	ADD			r3,r4,r3
	STR			r3,[r2,#0]
}
