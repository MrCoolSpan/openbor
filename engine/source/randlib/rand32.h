/*
 * OpenBOR - http://www.chronocrash.com
 * -----------------------------------------------------------------------
 * All rights reserved, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2014 OpenBOR Team
 */

#ifndef RAND32_H
#define RAND32_H

// 2014-08-24, DC: Package seed into a stuct so we don't have
// more unstructured global variables floating around.
typedef struct
{
    unsigned long seed;
} s_rand;

//extern unsigned long seed;

unsigned int rand32(void);

void srand32(int n);

#endif




