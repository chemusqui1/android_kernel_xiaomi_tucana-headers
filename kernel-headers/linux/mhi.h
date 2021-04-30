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
#ifndef _UAPI_MHI_H
#define _UAPI_MHI_H
#include <linux/types.h>
#include <linux/ioctl.h>
enum peripheral_ep_type {
  DATA_EP_TYPE_RESERVED,
  DATA_EP_TYPE_HSIC,
  DATA_EP_TYPE_HSUSB,
  DATA_EP_TYPE_PCIE,
  DATA_EP_TYPE_EMBEDDED,
  DATA_EP_TYPE_BAM_DMUX,
};
struct peripheral_ep_info {
  enum peripheral_ep_type ep_type;
  __u32 peripheral_iface_id;
};
struct ipa_ep_pair {
  __u32 cons_pipe_num;
  __u32 prod_pipe_num;
};
struct ep_info {
  struct peripheral_ep_info ph_ep_info;
  struct ipa_ep_pair ipa_ep_pair;
};
#define MHI_UCI_IOCTL_MAGIC 'm'
#define MHI_UCI_EP_LOOKUP _IOR(MHI_UCI_IOCTL_MAGIC, 2, struct ep_info)
#define MHI_UCI_DPL_EP_LOOKUP _IOR(MHI_UCI_IOCTL_MAGIC, 3, struct ep_info)
#define MHI_UCI_CV2X_EP_LOOKUP _IOR(MHI_UCI_IOCTL_MAGIC, 4, struct ep_info)
#endif
