/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __QG_H__
#define __QG_H__
#define MAX_FIFO_LENGTH 16
enum qg {
  QG_SOC,
  QG_OCV_UV,
  QG_RBAT_MOHM,
  QG_PON_OCV_UV,
  QG_GOOD_OCV_UV,
  QG_ESR,
  QG_CHARGE_COUNTER,
  QG_FIFO_TIME_DELTA,
  QG_BATT_SOC,
  QG_CC_SOC,
  QG_ESR_CHARGE_DELTA,
  QG_ESR_DISCHARGE_DELTA,
  QG_ESR_CHARGE_SF,
  QG_ESR_DISCHARGE_SF,
  QG_FULL_SOC,
  QG_CLEAR_LEARNT_DATA,
  QG_SYS_SOC,
  QG_RESERVED_10,
  QG_MAX,
};
#define QG_BATT_SOC QG_BATT_SOC
#define QG_CC_SOC QG_CC_SOC
#define QG_ESR_CHARGE_DELTA QG_ESR_CHARGE_DELTA
#define QG_ESR_DISCHARGE_DELTA QG_ESR_DISCHARGE_DELTA
#define QG_ESR_CHARGE_SF QG_ESR_CHARGE_SF
#define QG_ESR_DISCHARGE_SF QG_ESR_DISCHARGE_SF
#define QG_FULL_SOC QG_FULL_SOC
#define QG_CLEAR_LEARNT_DATA QG_CLEAR_LEARNT_DATA
#define QG_SYS_SOC QG_SYS_SOC
struct fifo_data {
  unsigned int v;
  unsigned int i;
  unsigned int count;
  unsigned int interval;
};
struct qg_param {
  unsigned int data;
  bool valid;
};
struct qg_kernel_data {
  unsigned int seq_no;
  unsigned int fifo_time;
  unsigned int fifo_length;
  struct fifo_data fifo[MAX_FIFO_LENGTH];
  struct qg_param param[QG_MAX];
};
struct qg_user_data {
  struct qg_param param[QG_MAX];
};
#endif
