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
#ifndef _UAPI_NFCINFO_H_
#define _UAPI_NFCINFO_H_
#include <linux/ioctl.h>
#define NFCC_MAGIC 0xE9
#define NFCC_GET_INFO _IOW(NFCC_MAGIC, 0x09, unsigned int)
struct nqx_devinfo {
  unsigned char chip_type;
  unsigned char rom_version;
  unsigned char fw_major;
  unsigned char fw_minor;
};
union nqx_uinfo {
  unsigned int i;
  struct nqx_devinfo info;
};
#endif
