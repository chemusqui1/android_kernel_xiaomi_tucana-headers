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
#ifndef __UAPI_AIS_ISP_H__
#define __UAPI_AIS_ISP_H__
#include "cam_defs.h"
#include "cam_isp_vfe.h"
#include "cam_isp_ife.h"
#include "cam_cpas.h"
#define AIS_IFE_DEV_NAME "ais-ife"
#define AIS_IFE_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 20)
#define AIS_IFE_OPCODE_START (CAM_COMMON_OPCODE_MAX)
#define AIS_IFE_QUERY_CAPS (AIS_IFE_OPCODE_START + 1)
#define AIS_IFE_POWER_UP (AIS_IFE_OPCODE_START + 2)
#define AIS_IFE_POWER_DOWN (AIS_IFE_OPCODE_START + 3)
#define AIS_IFE_RESET (AIS_IFE_OPCODE_START + 4)
#define AIS_IFE_RESERVE (AIS_IFE_OPCODE_START + 5)
#define AIS_IFE_RELEASE (AIS_IFE_OPCODE_START + 6)
#define AIS_IFE_START (AIS_IFE_OPCODE_START + 7)
#define AIS_IFE_STOP (AIS_IFE_OPCODE_START + 8)
#define AIS_IFE_PAUSE (AIS_IFE_OPCODE_START + 9)
#define AIS_IFE_RESUME (AIS_IFE_OPCODE_START + 10)
#define AIS_IFE_BUFFER_ENQ (AIS_IFE_OPCODE_START + 11)
#define AIS_IFE_DIAG_INFO (AIS_IFE_OPCODE_START + 12)
#define V4L_EVENT_TYPE_AIS_IFE (V4L2_EVENT_PRIVATE_START)
#define V4L_EVENT_ID_AIS_IFE 0
#endif
