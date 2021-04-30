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
#ifndef __AKM09970_H__
#define __AKM09970_H__
#include <linux/types.h>
#include <linux/ioctl.h>
#define AKM09970_DRV_NAME "akm09970"
#define AKM09970_CLASS_NAME "akm"
#define AKM_IOC_MAGIC 'M'
#define AKM_PRIVATE 109
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
#define AKM_DRDY_TIMEOUT_MS 100
#define AKM_DEFAULT_MEASURE_HZ 10
#define AKM09970_VDD_MIN_UV 1800000
#define AKM09970_VDD_MAX_UV 1800000
#define PWM_PERIOD_DEFAULT_NS 1000000
struct akm09970_platform_data {
  uint8_t sensor_smr;
  uint8_t sensor_mode;
  uint8_t sensor_state;
  uint8_t data[AKM_SENSOR_DATA_SIZE];
};
#define AKM_IOC_SET_ACTIVE _IOW(AKM_IOC_MAGIC, AKM_PRIVATE + 1, struct akm09970_platform_data)
#define AKM_IOC_SET_MODE _IOW(AKM_IOC_MAGIC, AKM_PRIVATE + 2, struct akm09970_platform_data)
#define AKM_IOC_GET_SENSEDATA _IOR(AKM_IOC_MAGIC, AKM_PRIVATE + 4, struct akm09970_platform_data)
#define AKM_IOC_GET_SENSSMR _IOR(AKM_IOC_MAGIC, AKM_PRIVATE + 5, struct akm09970_platform_data)
#endif
