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
#ifndef _UAPI_QRNG_H_
#define _UAPI_QRNG_H_
#include <linux/types.h>
#include <linux/ioctl.h>
#define QRNG_IOC_MAGIC 0x100
#define QRNG_IOCTL_RESET_BUS_BANDWIDTH _IO(QRNG_IOC_MAGIC, 1)
#endif
