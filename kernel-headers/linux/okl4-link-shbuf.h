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
#ifndef _LINUX_OKL4_LINK_SHBUF_H
#define _LINUX_OKL4_LINK_SHBUF_H
#include <linux/ioctl.h>
#include <linux/types.h>
#define OKL4_LINK_SHBUF_IOCTL_IRQ_TX _IOW(0x8d, 1, __u64)
#define OKL4_LINK_SHBUF_IOCTL_IRQ_CLR _IOR(0x8d, 2, __u64)
#endif
