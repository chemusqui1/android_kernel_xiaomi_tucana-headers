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
#ifndef _UAPI_MISC_DRV8846_H
#define _UAPI_MISC_DRV8846_H
#include <linux/types.h>
#include <linux/ioctl.h>
#define DRV8846_MISC_NAME "drv8846_dev"
#define UP 1
#define DOWN 0
#define DELTAMS 5
enum running_state {
  STILL = 0,
  SPEEDUP,
  FULLSTEAM,
  SLOWDOWN,
  UNIFORMSPEED
};
struct op_parameter {
  uint32_t dir;
  uint32_t duration_ms;
  uint32_t period_ns;
};
#define MOTOR_MAGIC 0xD3
#define MOTOR_IOC_SET_AUTORUN _IOW(MOTOR_MAGIC, 0x01, uint8_t)
#define MOTOR_IOC_SET_MANUALRUN _IOW(MOTOR_MAGIC, 0x02, struct op_parameter)
#define MOTOR_IOC_GET_REMAIN_TIME _IOR(MOTOR_MAGIC, 0x10, long)
#define MOTOR_IOC_GET_STATE _IOR(MOTOR_MAGIC, 0x11, enum running_state)
#endif
