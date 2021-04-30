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
#ifndef __UAPI_CORESIGHT_STM_H_
#define __UAPI_CORESIGHT_STM_H_
#define STM_FLAG_NONE 0x00
#define STM_FLAG_TIMESTAMPED 0x08
#define STM_FLAG_GUARANTEED 0x80
#define OST_ENTITY_NONE 0x00
#define OST_ENTITY_FTRACE_EVENTS 0x01
#define OST_ENTITY_TRACE_PRINTK 0x02
#define OST_ENTITY_TRACE_MARKER 0x04
#define OST_ENTITY_DEV_NODE 0x08
#define OST_ENTITY_DIAG 0xEE
#define OST_ENTITY_QVIEW 0xFE
#define OST_ENTITY_MAX 0xFF
enum {
  STM_OPTION_GUARANTEED = 0,
  STM_OPTION_INVARIANT,
};
#endif
