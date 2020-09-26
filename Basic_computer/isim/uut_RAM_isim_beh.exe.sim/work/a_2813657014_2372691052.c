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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Computer Architecture/ca_fp/Basic_computer/uut_RAM.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2813657014_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2813657014_2372691052_p_1(char *t0)
{
    char t12[16];
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int t10;
    int t11;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int64 t25;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6656);
    t4 = (t0 + 4160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 6661);
    t4 = (t0 + 4224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(104, ng0);
    t9 = (50 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6669);
    *((int *)t2) = 0;
    t3 = (t0 + 6673);
    *((int *)t3) = 30;
    t10 = 0;
    t11 = 30;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6690);
    t4 = (t0 + 4160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(117, ng0);
    t9 = (50 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 6576U);
    t6 = (t0 + 6677);
    t8 = (t13 + 0U);
    t14 = (t8 + 0U);
    *((int *)t14) = 0;
    t14 = (t8 + 4U);
    *((int *)t14) = 4;
    t14 = (t8 + 8U);
    *((int *)t14) = 1;
    t15 = (4 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t8 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t5, t4, t6, t13);
    t17 = (t12 + 12U);
    t16 = *((unsigned int *)t17);
    t18 = (1U * t16);
    t19 = (5U != t18);
    if (t19 == 1)
        goto LAB12;

LAB13:    t20 = (t0 + 4160);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 5U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 6560U);
    t4 = (t0 + 6682);
    t6 = (t13 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t16;
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t3, t2, t4, t13);
    t8 = (t12 + 12U);
    t16 = *((unsigned int *)t8);
    t18 = (1U * t16);
    t19 = (8U != t18);
    if (t19 == 1)
        goto LAB14;

LAB15:    t14 = (t0 + 4224);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 8U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t25 = (t9 * 5);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t25);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB10:    t2 = (t0 + 6669);
    t10 = *((int *)t2);
    t3 = (t0 + 6673);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB11;

LAB20:    t15 = (t10 + 1);
    t10 = t15;
    t4 = (t0 + 6669);
    *((int *)t4) = t10;
    goto LAB8;

LAB12:    xsi_size_not_matching(5U, t18, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(8U, t18, 0);
    goto LAB15;

LAB16:    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6695);
    *((int *)t2) = 0;
    t3 = (t0 + 6699);
    *((int *)t3) = 30;
    t10 = 0;
    t11 = 30;

LAB25:    if (t10 <= t11)
        goto LAB26;

LAB28:    xsi_set_current_line(124, ng0);
    t9 = (100 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB26:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 6576U);
    t6 = (t0 + 6703);
    t8 = (t13 + 0U);
    t14 = (t8 + 0U);
    *((int *)t14) = 0;
    t14 = (t8 + 4U);
    *((int *)t14) = 4;
    t14 = (t8 + 8U);
    *((int *)t14) = 1;
    t15 = (4 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t8 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t5, t4, t6, t13);
    t17 = (t12 + 12U);
    t16 = *((unsigned int *)t17);
    t18 = (1U * t16);
    t19 = (5U != t18);
    if (t19 == 1)
        goto LAB29;

LAB30:    t20 = (t0 + 4160);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 5U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t25 = (t9 * 5);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t25);

LAB33:    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB27:    t2 = (t0 + 6695);
    t10 = *((int *)t2);
    t3 = (t0 + 6699);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB28;

LAB35:    t15 = (t10 + 1);
    t10 = t15;
    t4 = (t0 + 6695);
    *((int *)t4) = t10;
    goto LAB25;

LAB29:    xsi_size_not_matching(5U, t18, 0);
    goto LAB30;

LAB31:    goto LAB27;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

LAB36:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);
    t9 = (150 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 6708);
    t4 = (t0 + 4160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(136, ng0);
    t9 = (50 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6713);
    *((int *)t2) = 0;
    t3 = (t0 + 6717);
    *((int *)t3) = 30;
    t10 = 0;
    t11 = 30;

LAB48:    if (t10 <= t11)
        goto LAB49;

LAB51:    xsi_set_current_line(143, ng0);

LAB61:    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB49:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 6576U);
    t6 = (t0 + 6721);
    t8 = (t13 + 0U);
    t14 = (t8 + 0U);
    *((int *)t14) = 0;
    t14 = (t8 + 4U);
    *((int *)t14) = 4;
    t14 = (t8 + 8U);
    *((int *)t14) = 1;
    t15 = (4 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t8 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t5, t4, t6, t13);
    t17 = (t12 + 12U);
    t16 = *((unsigned int *)t17);
    t18 = (1U * t16);
    t19 = (5U != t18);
    if (t19 == 1)
        goto LAB52;

LAB53:    t20 = (t0 + 4160);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 5U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t25 = (t9 * 5);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t25);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB50:    t2 = (t0 + 6713);
    t10 = *((int *)t2);
    t3 = (t0 + 6717);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB51;

LAB58:    t15 = (t10 + 1);
    t10 = t15;
    t4 = (t0 + 6713);
    *((int *)t4) = t10;
    goto LAB48;

LAB52:    xsi_size_not_matching(5U, t18, 0);
    goto LAB53;

LAB54:    goto LAB50;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

LAB59:    goto LAB2;

LAB60:    goto LAB59;

LAB62:    goto LAB60;

}


extern void work_a_2813657014_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2813657014_2372691052_p_0,(void *)work_a_2813657014_2372691052_p_1};
	xsi_register_didat("work_a_2813657014_2372691052", "isim/uut_RAM_isim_beh.exe.sim/work/a_2813657014_2372691052.didat");
	xsi_register_executes(pe);
}
