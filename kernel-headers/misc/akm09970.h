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
#ifndef _UAPI_MISC_AKM09970_H
#define _UAPI_MISC_AKM09970_H
#include <linux/types.h>
#include <linux/ioctl.h>
#define AKM_INPUT_DEVICE_NAME "compass"
#define AKM_MISCDEV_NAME "akm09970_dev"
#define AK09970_REG_WIA 0x00
#define AK09970_REG_ST_XYZ 0x17
#define AK09970_REG_CNTL1 0x20
#define AK09970_REG_CNTL2 0x21
#define AK09970_REG_RESET 0x30
#define AK09970_RESET_DATA 0x01
#define AK09970_WIA1_VALUE 0x48
#define AK09970_WIA2_VALUE 0xC0
#define AK09970_MODE_POWERDOWN 0x00
#define AK09970_MODE_CONTINUOUS_10HZ 0x08
#define AK09970_MODE_CONTINUOUS_20HZ 0x0A
#define AK09970_MODE_CONTINUOUS_50HZ 0x0C
#define AK09970_MODE_CONTINUOUS_100HZ 0x0E
#define AKM_SENSOR_INFO_SIZE 2
#define AKM_SENSOR_CONF_SIZE 3
#define AKM_SENSOR_DATA_SIZE 8
#define AK09970_MODE_POS 0
#define AK09970_MODE_MSK 0x0F
#define AK09970_MODE_REG AK09970_REG_CNTL2
#define AK09970_SDR_MODE_POS 4
#define AK09970_SDR_MODE_MSK 0x10
#define AK09970_SDR_MODE_REG AK09970_REG_CNTL2
#define AK09970_SMR_MODE_POS 5
#define AK09970_SMR_MODE_MSK 0x20
#define AK09970_SMR_MODE_REG AK09970_REG_CNTL2
#define AKM_DRDY_IS_HIGH(x) ((x) & 0x01)
#define AKM_DOR_IS_HIGH(x) ((x) & 0x02)
#define AKM_ERRADC_IS_HIGH(x) ((x) & 0x01)
#define AKM_ERRXY_IS_HIGH(x) ((x) & 0x80)
#define AK09970_SENS_Q16 ((int32_t) (72090))
#define AKM_SENSOR 0xD4
#define AKM_IOC_SET_ACTIVE _IOW(AKM_SENSOR, 0x00, uint8_t)
#define AKM_IOC_SET_MODE _IOW(AKM_SENSOR, 0x01, uint8_t)
#define AKM_IOC_SET_PRESS _IOW(AKM_SENSOR, 0x02, uint8_t)
#define AKM_IOC_GET_SENSEDATA _IOR(AKM_SENSOR, 0x10, int[3])
#define AKM_IOC_GET_SENSSMR _IOR(AKM_SENSOR, 0x11, uint8_t)
#endif
