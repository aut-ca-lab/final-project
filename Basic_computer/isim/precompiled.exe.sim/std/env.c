/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif



void std_env_sub_2117836309_325555557(char *t0, char *t1, int t2)
{
    char t4[8];
    char *t5;
    char *t6;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t0 + 2096);
    xsi_report(t6, 4U, (unsigned char)2);

LAB1:    return;
}

void std_env_sub_2007771138_325555557(char *t0, char *t1)
{

LAB0:    std_env_sub_2117836309_325555557(t0, t1, 0);

LAB1:    return;
}

void std_env_sub_2592003824_325555557(char *t0, char *t1, int t2)
{
    char t4[8];
    char *t5;
    char *t6;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t0 + 2100);
    xsi_report(t6, 6U, (unsigned char)3);

LAB1:    return;
}

void std_env_sub_2481938653_325555557(char *t0, char *t1)
{

LAB0:    std_env_sub_2592003824_325555557(t0, t1, 0);

LAB1:    return;
}

int64 std_env_sub_1706539372_325555557(char *t1)
{
    int64 t0;
    int64 t4;

LAB0:    t4 = (0 * 1000LL);
    t0 = t4;

LAB1:    return t0;
LAB2:;
}


extern void std_env_init()
{
	static char *se[] = {(void *)std_env_sub_2117836309_325555557,(void *)std_env_sub_2007771138_325555557,(void *)std_env_sub_2592003824_325555557,(void *)std_env_sub_2481938653_325555557,(void *)std_env_sub_1706539372_325555557};
	xsi_register_didat("std_env", "isim/precompiled.exe.sim/std/env.didat");
	xsi_register_subprogram_executes(se);
}
