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
#ifndef _IPT_NATTYPE_H_target
#define _IPT_NATTYPE_H_target
#define NATTYPE_TIMEOUT 300
enum nattype_mode {
  MODE_DNAT,
  MODE_FORWARD_IN,
  MODE_FORWARD_OUT
};
enum nattype_type {
  TYPE_PORT_ADDRESS_RESTRICTED,
  TYPE_ENDPOINT_INDEPENDENT,
  TYPE_ADDRESS_RESTRICTED
};
struct ipt_nattype_info {
  u_int16_t mode;
  u_int16_t type;
};
#endif
