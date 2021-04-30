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
#ifndef OKL4_VIPC_H
#define OKL4_VIPC_H
#include <linux/ioctl.h>
struct okl4_vipc_data {
  unsigned int index;
  unsigned long long size;
  unsigned long flags;
};
#define OKL4_VIPC_IOC_MAGIC 'z'
#define OKL4_VIPC_GET_BUFFER_COUNT _IOR(OKL4_VIPC_IOC_MAGIC, 0, unsigned long *)
#define OKL4_VIPC_GET_BUFFER_INFO _IOR(OKL4_VIPC_IOC_MAGIC, 1, struct okl4_vipc_data *)
#endif
