#ifndef __Test
#define __Test

#include <stdint.h>
void add (uint16_t *a, uint16_t *b, uint16_t *c);

__asm void MUL_4(int32_t *a, int32_t *b, int32_t *c);
__asm void SUM_4(int32_t *a, int32_t *b, int32_t *c);
__asm void MIN_4(int32_t *a, int32_t *b, int32_t *c);
__asm void DIV_4(int32_t *a, int32_t *b, int32_t *c);

//__asm void MUL_9(int32_t *a, int32_t *b, int32_t *c);
__asm void SUM_9(int32_t *a, int32_t *b, int32_t *c);
__asm void MIN_9(int32_t *a, int32_t *b, int32_t *c);
//__asm void DIV_9(int32_t *a, int32_t *b, int32_t *c);

__asm void MAC_4(int32_t *a, int32_t *b, int32_t *c);

#endif
