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
static const char *ng0 = "D:/GitHub/CG3207-Lab-2/src/alu.vhd";



static void work_a_1735503340_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(462, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(478, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 3112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(463, ng0);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t1 = (t0 + 4935);
    t7 = xsi_mem_cmp(t1, t5, 2U);
    if (t7 == 1)
        goto LAB6;

LAB9:    t8 = (t0 + 4937);
    t10 = xsi_mem_cmp(t8, t5, 2U);
    if (t10 == 1)
        goto LAB7;

LAB10:    t11 = (t0 + 4939);
    t13 = xsi_mem_cmp(t11, t5, 2U);
    if (t13 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(475, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(465, ng0);
    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    t16 = (31 - 16);
    t17 = (31 - t16);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = (t0 + 3192);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 16U);
    xsi_driver_first_trans_delta(t20, 0U, 16U, 0LL);
    xsi_set_current_line(466, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 3192);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t5, 16U, 16U, 0LL);
    goto LAB5;

LAB7:    xsi_set_current_line(468, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t7 = (0 - 1);
    t17 = (t7 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(472, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t17 = (31 - 31);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t5 = (t0 + 3192);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t5, 16U, 16U, 0LL);
    xsi_set_current_line(473, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t7 = (31 - 31);
    t17 = (t7 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t5 = (t6 + t19);
    t3 = *((unsigned char *)t5);
    memset(t2, t3, 16U);
    t8 = (t0 + 3192);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 16U);
    xsi_driver_first_trans_delta(t8, 0U, 16U, 0LL);

LAB14:    goto LAB5;

LAB12:;
LAB13:    xsi_set_current_line(469, ng0);
    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t25 = (31 - 31);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t5 = (t6 + t27);
    t8 = (t0 + 3192);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 16U);
    xsi_driver_first_trans_delta(t8, 16U, 16U, 0LL);
    xsi_set_current_line(470, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 3192);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, 0LL);
    goto LAB14;

}


extern void work_a_1735503340_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1735503340_3212880686_p_0};
	xsi_register_didat("work_a_1735503340_3212880686", "isim/tb_alu_isim_beh.exe.sim/work/a_1735503340_3212880686.didat");
	xsi_register_executes(pe);
}
