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
#ifndef _UAPI_AIS_V4L2_H
#define _UAPI_AIS_V4L2_H
#define AIS_V4L2_DRV_MAX_VERSION 1
#define AIS_V4L2_DRV_MIN_VERSION 2
#define AIS_V4L2_DRV_BUGFIX_VERSION 0
#define MAX_AIS_V4L2_PAYLOAD_SIZE 256
#define MAX_AIS_V4L2_PARAM_EVNET_SIZE 62
enum AIS_V4L2_CLIENT_ID {
  AIS_V4L2_CLIENT_OUTPUT = 1,
  AIS_V4L2_CLIENT_CAPTURE = 2,
};
enum AIS_V4L2_NOTIFY_CMD {
  AIS_V4L2_OPEN_INPUT = 0,
  AIS_V4L2_CLOSE_INPUT,
  AIS_V4L2_START_INPUT,
  AIS_V4L2_STOP_INPUT,
  AIS_V4L2_GET_PARAM,
  AIS_V4L2_SET_PARAM,
  AIS_V4L2_PARAM_EVENT,
};
enum AIS_V4L2_PARAM_CODE {
  AIS_V4L2_PARAM_EVENT_CB = 0x1,
  AIS_V4L2_PARAM_EVENT_MASK,
  AIS_V4L2_PARAM_COLOR_FMT,
  AIS_V4L2_PARAM_RESOLUTION,
  AIS_V4L2_PARAM_BRIGHTNESS,
  AIS_V4L2_PARAM_CONTRAST,
  AIS_V4L2_PARAM_MIRROR_H,
  AIS_V4L2_PARAM_MIRROR_V,
  AIS_V4L2_PARAM_FRAME_RATE,
  AIS_V4L2_PARAM_VID_STD,
  AIS_V4L2_PARAM_CURRENT_VID_STD,
  AIS_V4L2_PARAM_STATUS,
  AIS_V4L2_PARAM_LATENCY_MAX,
  AIS_V4L2_PARAM_LATENCY_REDUCE_RATE,
  AIS_V4L2_PARAM_PRIVATE_DATA,
  AIS_V4L2_PARAM_INJECTION_START,
  AIS_V4L2_PARAM_EXPOSURE,
  AIS_V4L2_PARAM_HUE,
  AIS_V4L2_PARAM_SATURATION,
  AIS_V4L2_PARAM_HDR_EXPOSURE,
  AIS_V4L2_PARAM_GAMMA,
  AIS_V4L2_PARAM_OPMODE,
  AIS_V4L2_PARAM_ISP_CTRLS,
  AIS_V4L2_PARAM_VENDOR,
  AIS_V4L2_PARAM_INPUT_MODE,
  AIS_V4L2_PARAM_MASTER,
  AIS_V4L2_PARAM_EVENT_CHANGE_SUBSCRIBE,
  AIS_V4L2_PARAM_EVENT_CHANGE_UNSUBSCRIBE,
  AIS_V4L2_PARAM_NUM,
  AIS_V4L2_PARAM_MAX = 0x7FFFFFFF
};
enum AIS_V4L2_OUTPUT_PRIVATE_CMD {
  AIS_V4L2_OUTPUT_PRIV_SET_PARAM_RET,
  AIS_V4L2_OUTPUT_PRIV_SET_PARAM_EVENT,
  AIS_V4L2_OUTPUT_PRIV_SET_PARAM2,
  AIS_V4L2_OUTPUT_PRIV_GET_PARAM,
};
enum AIS_V4L2_CAPTURE_PRIVATE_CMD {
  AIS_V4L2_CAPTURE_PRIV_SET_PARAM,
  AIS_V4L2_CAPTURE_PRIV_GET_PARAM,
};
struct ais_v4l2_control_t {
  __u32 type;
  __u32 size;
  __u64 payload;
  __u8 cmd;
  __u8 param_type;
};
#endif
