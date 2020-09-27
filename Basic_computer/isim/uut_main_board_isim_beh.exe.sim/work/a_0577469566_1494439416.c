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
static const char *ng0 = "E:/Computer Architecture/ca_fp/Basic_computer/cpu8bit.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0577469566_1494439416_p_0(char *t0)
{
    char t12[16];
    char t25[16];
    char t29[16];
    char t30[16];
    char t32[16];
    char t34[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    int t22;
    unsigned char t23;
    unsigned char t24;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    int t31;
    char *t33;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    char *t50;
    static char *nl0[] = {&&LAB28, &&LAB21, &&LAB28, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27};

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1120U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2944);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(27, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t5 = t1;
    memset(t5, (unsigned char)2, 5U);
    t6 = (t0 + 3020);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3056);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(29, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t2 = t1;
    memset(t2, (unsigned char)2, 9U);
    t5 = (t0 + 3092);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 9U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 3128);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1236U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)0);
    if (t11 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 != (unsigned char)3);
    if (t11 == 1)
        goto LAB14;

LAB15:    t1 = (t0 + 1236U);
    t5 = *((char **)t1);
    t20 = *((unsigned char *)t5);
    t21 = (t20 != (unsigned char)4);
    if (t21 == 1)
        goto LAB17;

LAB18:    t1 = (t0 + 1328U);
    t6 = *((char **)t1);
    t22 = (8 - 8);
    t13 = (t22 * -1);
    t14 = (1U * t13);
    t19 = (0 + t14);
    t1 = (t6 + t19);
    t23 = *((unsigned char *)t1);
    t24 = (t23 != (unsigned char)3);
    t15 = t24;

LAB19:    t3 = t15;

LAB16:    if (t3 != 0)
        goto LAB12;

LAB13:
LAB8:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t2 = (t0 + 5536U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t6, t2, 1);
    t8 = (t12 + 12U);
    t13 = *((unsigned int *)t8);
    t14 = (1U * t13);
    t15 = (5U != t14);
    if (t15 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 3128);
    t10 = (t9 + 32U);
    t16 = *((char **)t10);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 5U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t13 = (7 - 4);
    t14 = (t13 * 1U);
    t19 = (0 + t14);
    t1 = (t2 + t19);
    t5 = (t0 + 3020);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB8;

LAB10:    xsi_size_not_matching(5U, t14, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t7 = (t0 + 3020);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t16 = (t10 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 5U);
    xsi_driver_first_trans_fast(t7);
    goto LAB8;

LAB14:    t3 = (unsigned char)1;
    goto LAB16;

LAB17:    t15 = (unsigned char)1;
    goto LAB19;

LAB20:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)0);
    if (t4 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t14 = (t13 * 1U);
    t19 = (0 + t14);
    t1 = (t2 + t19);
    t5 = (t0 + 5592);
    t22 = xsi_mem_cmp(t5, t1, 3U);
    if (t22 == 1)
        goto LAB41;

LAB50:    t7 = (t0 + 5595);
    t31 = xsi_mem_cmp(t7, t1, 3U);
    if (t31 == 1)
        goto LAB42;

LAB51:    t9 = (t0 + 5598);
    t37 = xsi_mem_cmp(t9, t1, 3U);
    if (t37 == 1)
        goto LAB43;

LAB52:    t16 = (t0 + 5601);
    t45 = xsi_mem_cmp(t16, t1, 3U);
    if (t45 == 1)
        goto LAB44;

LAB53:    t18 = (t0 + 5604);
    t46 = xsi_mem_cmp(t18, t1, 3U);
    if (t46 == 1)
        goto LAB45;

LAB54:    t33 = (t0 + 5607);
    t47 = xsi_mem_cmp(t33, t1, 3U);
    if (t47 == 1)
        goto LAB46;

LAB55:    t36 = (t0 + 5610);
    t48 = xsi_mem_cmp(t36, t1, 3U);
    if (t48 == 1)
        goto LAB47;

LAB56:    t39 = (t0 + 5613);
    t49 = xsi_mem_cmp(t39, t1, 3U);
    if (t49 == 1)
        goto LAB48;

LAB57:
LAB49:    xsi_set_current_line(72, ng0);

LAB40:
LAB38:    goto LAB3;

LAB21:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 592U);
    t6 = *((char **)t5);
    t5 = (t0 + 3092);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 8U);
    xsi_driver_first_trans_delta(t5, 1U, 8U, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 3128);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB23:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 3092);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 3128);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB24:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t13 = (8 - 7);
    t14 = (t13 * 1U);
    t19 = (0 + t14);
    t1 = (t2 + t19);
    t5 = (t25 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t22 = (0 - 7);
    t26 = (t22 * -1);
    t26 = (t26 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t26;
    t6 = (t0 + 592U);
    t7 = *((char **)t6);
    t6 = (t0 + 5456U);
    t8 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t12, t1, t25, t7, t6);
    t9 = (t12 + 12U);
    t26 = *((unsigned int *)t9);
    t27 = (1U * t26);
    t3 = (8U != t27);
    if (t3 == 1)
        goto LAB29;

LAB30:    t10 = (t0 + 3092);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t28 = *((char **)t18);
    memcpy(t28, t8, 8U);
    xsi_driver_first_trans_delta(t10, 1U, 8U, 0LL);
    goto LAB20;

LAB25:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 5590);
    t5 = (t0 + 1328U);
    t6 = *((char **)t5);
    t13 = (8 - 7);
    t14 = (t13 * 1U);
    t19 = (0 + t14);
    t5 = (t6 + t19);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = (t29 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t22 = (0 - 0);
    t26 = (t22 * 1);
    t26 = (t26 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t26;
    t10 = (t30 + 0U);
    t16 = (t10 + 0U);
    *((int *)t16) = 7;
    t16 = (t10 + 4U);
    *((int *)t16) = 0;
    t16 = (t10 + 8U);
    *((int *)t16) = -1;
    t31 = (0 - 7);
    t26 = (t31 * -1);
    t26 = (t26 + 1);
    t16 = (t10 + 12U);
    *((unsigned int *)t16) = t26;
    t7 = xsi_base_array_concat(t7, t25, t8, (char)97, t1, t29, (char)97, t5, t30, (char)101);
    t16 = (t0 + 5591);
    t18 = (t0 + 592U);
    t28 = *((char **)t18);
    t33 = ((IEEE_P_2592010699) + 2332);
    t35 = (t34 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = 0;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t37 = (0 - 0);
    t26 = (t37 * 1);
    t26 = (t26 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t26;
    t36 = (t0 + 5456U);
    t18 = xsi_base_array_concat(t18, t32, t33, (char)97, t16, t34, (char)97, t28, t36, (char)101);
    t38 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t7, t25, t18, t32);
    t39 = (t12 + 12U);
    t26 = *((unsigned int *)t39);
    t27 = (1U * t26);
    t3 = (9U != t27);
    if (t3 == 1)
        goto LAB31;

LAB32:    t40 = (t0 + 3092);
    t41 = (t40 + 32U);
    t42 = *((char **)t41);
    t43 = (t42 + 40U);
    t44 = *((char **)t43);
    memcpy(t44, t38, 9U);
    xsi_driver_first_trans_fast(t40);
    goto LAB20;

LAB26:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t1 = (t0 + 5504U);
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t12, t2, t1);
    t6 = (t12 + 12U);
    t13 = *((unsigned int *)t6);
    t14 = (1U * t13);
    t3 = (9U != t14);
    if (t3 == 1)
        goto LAB33;

LAB34:    t7 = (t0 + 3092);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t16 = *((char **)t10);
    memcpy(t16, t5, 9U);
    xsi_driver_first_trans_fast(t7);
    goto LAB20;

LAB27:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t13 = (8 - 7);
    t14 = (t13 * 1U);
    t19 = (0 + t14);
    t1 = (t2 + t19);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t25 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t22 = (0 - 7);
    t26 = (t22 * -1);
    t26 = (t26 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t26;
    t5 = xsi_base_array_concat(t5, t12, t6, (char)97, t1, t25, (char)99, (unsigned char)2, (char)101);
    t26 = (8U + 1U);
    t3 = (9U != t26);
    if (t3 == 1)
        goto LAB35;

LAB36:    t8 = (t0 + 3092);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t16 = (t10 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 9U);
    xsi_driver_first_trans_fast(t8);
    goto LAB20;

LAB28:    xsi_set_current_line(51, ng0);
    goto LAB20;

LAB29:    xsi_size_not_matching(8U, t27, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(9U, t27, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(9U, t14, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(9U, t26, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3056);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB41:    xsi_set_current_line(59, ng0);
    t41 = (t0 + 3056);
    t42 = (t41 + 32U);
    t43 = *((char **)t42);
    t44 = (t43 + 40U);
    t50 = *((char **)t44);
    *((unsigned char *)t50) = (unsigned char)1;
    xsi_driver_first_trans_fast(t41);
    goto LAB40;

LAB42:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3056);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB43:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 3056);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB44:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t22 = (8 - 8);
    t13 = (t22 * -1);
    t14 = (1U * t13);
    t19 = (0 + t14);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB59;

LAB61:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3056);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB60:    goto LAB40;

LAB45:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3056);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB46:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 3056);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB47:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3056);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB48:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3056);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB58:;
LAB59:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 3056);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t5);
    goto LAB60;

}

static void work_a_0577469566_1494439416_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 3164);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2952);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0577469566_1494439416_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = (8 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3200);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 2960);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0577469566_1494439416_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1236U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 3236);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 2968);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 3236);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0577469566_1494439416_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1236U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 != (unsigned char)2);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 3272);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 2976);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 3272);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void work_a_0577469566_1494439416_init()
{
	static char *pe[] = {(void *)work_a_0577469566_1494439416_p_0,(void *)work_a_0577469566_1494439416_p_1,(void *)work_a_0577469566_1494439416_p_2,(void *)work_a_0577469566_1494439416_p_3,(void *)work_a_0577469566_1494439416_p_4};
	xsi_register_didat("work_a_0577469566_1494439416", "isim/uut_main_board_isim_beh.exe.sim/work/a_0577469566_1494439416.didat");
	xsi_register_executes(pe);
}
