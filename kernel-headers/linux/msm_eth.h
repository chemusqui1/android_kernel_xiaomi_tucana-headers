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
#ifndef _UAPI_MSM_ETH_H_
#define _UAPI_MSM_ETH_H_
#include <linux/types.h>
#define ETH_EVT_START 0
#define ETH_EVT_CV2X_PIPE_CONNECTED (ETH_EVT_START + 1)
#define ETH_EVT_CV2X_PIPE_DISCONNECTED (ETH_EVT_CV2X_PIPE_CONNECTED + 1)
#define ETH_EVT_CV2X_MODE_NOT_ENABLED (ETH_EVT_CV2X_PIPE_DISCONNECTED + 1)
struct eth_msg_meta {
  __u8 msg_type;
  __u8 rsvd;
  __u16 msg_len;
};
#define ETH_IOC_MAGIC 0xA5
#define ETH_ADAPTION_IOCTL_DEVICE_NAME "/dev/eth-pwr"
#define IOC_MDM_ETH_SUSPEND _IOWR(ETH_IOC_MAGIC, IOCTL_MDM_ETH_SUSPEND, uint32_t)
#define IOC_MDM_ETH_RESUME _IOWR(ETH_IOC_MAGIC, IOCTL_MDM_ETH_RESUME, uint32_t)
#define IOC_EAP_ETH_SUSPEND _IOWR(ETH_IOC_MAGIC, IOCTL_EAP_ETH_SUSPEND, uint32_t)
#define IOC_EAP_ETH_RESUME _IOWR(ETH_IOC_MAGIC, IOCTL_EAP_ETH_RESUME, uint32_t)
enum power_ioctl_eth {
  IOCTL_MDM_ETH_SUSPEND = 0,
  IOCTL_MDM_ETH_RESUME,
  IOCTL_EAP_ETH_SUSPEND,
  IOCTL_EAP_ETH_RESUME,
};
#endif
