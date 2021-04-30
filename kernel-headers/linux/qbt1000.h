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
#ifndef _UAPI_QBT1000_H_
#define _UAPI_QBT1000_H_
#define MAX_NAME_SIZE 32
enum qbt1000_commands {
  QBT1000_LOAD_APP = 100,
  QBT1000_UNLOAD_APP = 101,
  QBT1000_SEND_TZCMD = 102,
  QBT1000_SET_FINGER_DETECT_KEY = 103,
  QBT1000_CONFIGURE_POWER_KEY = 104
};
#define QBT1000_ENABLE_GESTURES 105
#define QBT1000_ACQUIRE_WAKELOCK 106
#define QBT1000_RELEASE_WAKELOCK 107
enum qbt1000_fw_event {
  FW_EVENT_FINGER_DOWN = 1,
  FW_EVENT_FINGER_UP = 2,
  FW_EVENT_CBGE_REQUIRED = 3,
};
struct qbt1000_app {
  struct qseecom_handle * * app_handle;
  char name[MAX_NAME_SIZE];
  uint32_t size;
  uint8_t high_band_width;
};
struct qbt1000_send_tz_cmd {
  struct qseecom_handle * app_handle;
  uint8_t * req_buf;
  uint32_t req_buf_len;
  uint8_t * rsp_buf;
  uint32_t rsp_buf_len;
};
struct qbt1000_erie_event {
  uint8_t * buf;
  uint32_t buf_len;
};
struct qbt1000_enable_gestures {
  unsigned int enable;
};
struct qbt1000_set_finger_detect_key {
  unsigned int key_code;
};
struct qbt1000_configure_power_key {
  unsigned int enable;
};
#endif
