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
#ifndef __QG_PROFILE_H__
#define __QG_PROFILE_H__
#include <linux/ioctl.h>
enum profile_table {
  TABLE_SOC_OCV1,
  TABLE_SOC_OCV2,
  TABLE_FCC1,
  TABLE_FCC2,
  TABLE_Z1,
  TABLE_Z2,
  TABLE_Z3,
  TABLE_Z4,
  TABLE_Z5,
  TABLE_Z6,
  TABLE_Y1,
  TABLE_Y2,
  TABLE_Y3,
  TABLE_Y4,
  TABLE_Y5,
  TABLE_Y6,
  TABLE_MAX,
};
struct battery_params {
  int soc;
  int ocv_uv;
  int fcc_mah;
  int slope;
  int var;
  int batt_temp;
  int table_index;
};
#define QG_MIN_SOC 0
#define QG_MAX_SOC 10000
#define QG_MIN_OCV_UV 2000000
#define QG_MAX_OCV_UV 5000000
#define QG_MIN_VAR 0
#define QG_MAX_VAR 65535
#define QG_MIN_FCC_MAH 100
#define QG_MAX_FCC_MAH 16000
#define QG_MIN_SLOPE 1
#define QG_MAX_SLOPE 50000
#define QG_ESR_SF_MIN 5000
#define QG_ESR_SF_MAX 20000
#define BPIOCXSOC _IOWR('B', 0x01, struct battery_params)
#define BPIOCXOCV _IOWR('B', 0x02, struct battery_params)
#define BPIOCXFCC _IOWR('B', 0x03, struct battery_params)
#define BPIOCXSLOPE _IOWR('B', 0x04, struct battery_params)
#define BPIOCXVAR _IOWR('B', 0x05, struct battery_params)
#endif
