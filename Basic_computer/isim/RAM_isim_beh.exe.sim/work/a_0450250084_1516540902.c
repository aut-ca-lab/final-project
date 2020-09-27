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
static const char *ng0 = "E:/Computer Architecture/ca_fp/Basic_computer/RAM.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0450250084_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 936U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB3:    t1 = (t0 + 2092);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4209);
    *((int *)t1) = 0;
    t5 = (t0 + 4213);
    *((int *)t5) = 31;
    t6 = 0;
    t7 = 31;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(64, ng0);
    t8 = (t0 + 4217);
    t10 = (8U != 8U);
    if (t10 == 1)
        goto LAB9;

LAB10:    t11 = (t0 + 4209);
    t12 = *((int *)t11);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t17 = (t0 + 2136);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 8U);
    xsi_driver_first_trans_delta(t17, t16, 8U, 0LL);

LAB7:    t1 = (t0 + 4209);
    t6 = *((int *)t1);
    t2 = (t0 + 4213);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB11:    t12 = (t6 + 1);
    t6 = t12;
    t5 = (t0 + 4209);
    *((int *)t5) = t6;
    goto LAB5;

LAB9:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB10;

LAB12:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t10 = (t4 == (unsigned char)3);
    if (t10 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB13;

LAB15:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 592U);
    t8 = *((char **)t2);
    t2 = (t0 + 684U);
    t9 = *((char **)t2);
    t2 = (t0 + 3864U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t9, t2);
    t7 = (t6 - 0);
    t14 = (t7 * 1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t11 = (t0 + 2136);
    t17 = (t11 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_delta(t11, t16, 8U, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1236U);
    t5 = *((char **)t1);
    t1 = (t0 + 684U);
    t8 = *((char **)t1);
    t1 = (t0 + 3864U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t1);
    t7 = (t6 - 0);
    t14 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t6);
    t15 = (8U * t14);
    t16 = (0 + t15);
    t9 = (t5 + t16);
    t11 = (t0 + 2172);
    t17 = (t11 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB19;

}


extern void work_a_0450250084_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0450250084_1516540902_p_0};
	xsi_register_didat("work_a_0450250084_1516540902", "isim/RAM_isim_beh.exe.sim/work/a_0450250084_1516540902.didat");
	xsi_register_executes(pe);
}
