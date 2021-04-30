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
#ifndef __UAPI_CAM_HYP_ITF_H__
#define __UAPI_CAM_HYP_ITF_H__
struct cam_hyp_intf_hyp_handle_type {
  uint32_t fd;
  uint32_t handle;
};
#define MSM_CAM_HYP_INTF_IOCTL_MAGIC '^'
#define MSM_CAM_HYP_INTF_IOCTL_GET_HYP_HANDLE _IOWR(MSM_CAM_HYP_INTF_IOCTL_MAGIC, 0, struct cam_hyp_intf_hyp_handle_type)
#define MSM_CAM_HYP_INTF_IOCTL_MAX 0
#endif
