/*
    This file is part of AutoQuad.

    AutoQuad is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AutoQuad is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with AutoQuad.  If not, see <http://www.gnu.org/licenses/>.

    Copyright � 2011, 2012  Bill Nesbitt
*/

#ifndef _config_h
#define _config_h

#include "aq.h"

#define CONFIG_HEADER	    "config_default.h"
//#define CONFIG_HEADER	    "config_hex.h"
//#define CONFIG_HEADER	    "config_oct.h"

#define CONFIG_FILE_NAME	    "params.txt"
#define CONFIG_BUF_SIZE		    512

enum configParameters {
    CONFIG_VERSION = 0,
    RADIO_TYPE,
    CTRL_PID_TYPE,
    CTRL_FACT_THRO,
    CTRL_FACT_PITC,
    CTRL_FACT_ROLL,
    CTRL_FACT_RUDD,
    CTRL_DEAD_BAND,
    CTRL_MIN_THROT,
    CTRL_MAX,
    CTRL_NAV_YAW_RT,
    CTRL_TLT_RTE_P,
    CTRL_TLT_RTE_I,
    CTRL_TLT_RTE_D,
    CTRL_TLT_RTE_F,
    CTRL_TLT_RTE_PM,
    CTRL_TLT_RTE_IM,
    CTRL_TLT_RTE_DM,
    CTRL_TLT_RTE_OM,
    CTRL_YAW_RTE_P,
    CTRL_YAW_RTE_I,
    CTRL_YAW_RTE_D,
    CTRL_YAW_RTE_F,
    CTRL_YAW_RTE_PM,
    CTRL_YAW_RTE_IM,
    CTRL_YAW_RTE_DM,
    CTRL_YAW_RTE_OM,
    CTRL_TLT_ANG_P,
    CTRL_TLT_ANG_I,
    CTRL_TLT_ANG_D,
    CTRL_TLT_ANG_F,
    CTRL_TLT_ANG_PM,
    CTRL_TLT_ANG_IM,
    CTRL_TLT_ANG_DM,
    CTRL_TLT_ANG_OM,
    CTRL_YAW_ANG_P,
    CTRL_YAW_ANG_I,
    CTRL_YAW_ANG_D,
    CTRL_YAW_ANG_F,
    CTRL_YAW_ANG_PM,
    CTRL_YAW_ANG_IM,
    CTRL_YAW_ANG_DM,
    CTRL_YAW_ANG_OM,
    GPS_BAUD_RATE,
    GPS_RATE,
    MOT_FRAME,
    MOT_START,
    MOT_MIN,
    MOT_MAX,
    MOT_HOV_THROT,
    MOT_EXP_FACT,
    MOT_EXP_MIN,
    MOT_EXP_MAX,
    MOT_PWRD_01_T,
    MOT_PWRD_01_P,
    MOT_PWRD_01_R,
    MOT_PWRD_01_Y,
    MOT_PWRD_02_T,
    MOT_PWRD_02_P,
    MOT_PWRD_02_R,
    MOT_PWRD_02_Y,
    MOT_PWRD_03_T,
    MOT_PWRD_03_P,
    MOT_PWRD_03_R,
    MOT_PWRD_03_Y,
    MOT_PWRD_04_T,
    MOT_PWRD_04_P,
    MOT_PWRD_04_R,
    MOT_PWRD_04_Y,
    MOT_PWRD_05_T,
    MOT_PWRD_05_P,
    MOT_PWRD_05_R,
    MOT_PWRD_05_Y,
    MOT_PWRD_06_T,
    MOT_PWRD_06_P,
    MOT_PWRD_06_R,
    MOT_PWRD_06_Y,
    MOT_PWRD_07_T,
    MOT_PWRD_07_P,
    MOT_PWRD_07_R,
    MOT_PWRD_07_Y,
    MOT_PWRD_08_T,
    MOT_PWRD_08_P,
    MOT_PWRD_08_R,
    MOT_PWRD_08_Y,
    MOT_PWRD_09_T,
    MOT_PWRD_09_P,
    MOT_PWRD_09_R,
    MOT_PWRD_09_Y,
    MOT_PWRD_10_T,
    MOT_PWRD_10_P,
    MOT_PWRD_10_R,
    MOT_PWRD_10_Y,
    MOT_PWRD_11_T,
    MOT_PWRD_11_P,
    MOT_PWRD_11_R,
    MOT_PWRD_11_Y,
    MOT_PWRD_12_T,
    MOT_PWRD_12_P,
    MOT_PWRD_12_R,
    MOT_PWRD_12_Y,
    MOT_PWRD_13_T,
    MOT_PWRD_13_P,
    MOT_PWRD_13_R,
    MOT_PWRD_13_Y,
    MOT_PWRD_14_T,
    MOT_PWRD_14_P,
    MOT_PWRD_14_R,
    MOT_PWRD_14_Y,
    DOWNLINK_BAUD,
    TELEMETRY_RATE,
    NAV_MAX_SPEED,
    NAV_MAX_DECENT,
    NAV_SPEED_P,
    NAV_SPEED_I,
    NAV_SPEED_PM,
    NAV_SPEED_IM,
    NAV_SPEED_OM,
    NAV_DIST_P,
    NAV_DIST_I,
    NAV_DIST_PM,
    NAV_DIST_IM,
    NAV_DIST_OM,
    NAV_ATL_SPED_P,
    NAV_ATL_SPED_I,
    NAV_ATL_SPED_PM,
    NAV_ATL_SPED_IM,
    NAV_ATL_SPED_OM,
    NAV_ALT_POS_P,
    NAV_ALT_POS_I,
    NAV_ALT_POS_PM,
    NAV_ALT_POS_IM,
    NAV_ALT_POS_OM,
    IMU_ROT,
    IMU_ACC_BIAS_X,
    IMU_ACC_BIAS_Y,
    IMU_ACC_BIAS_Z,
    IMU_ACC_BIAS1_X,
    IMU_ACC_BIAS1_Y,
    IMU_ACC_BIAS1_Z,
    IMU_ACC_BIAS2_X,
    IMU_ACC_BIAS2_Y,
    IMU_ACC_BIAS2_Z,
    IMU_ACC_BIAS3_X,
    IMU_ACC_BIAS3_Y,
    IMU_ACC_BIAS3_Z,
    IMU_ACC_SCAL_X,
    IMU_ACC_SCAL_Y,
    IMU_ACC_SCAL_Z,
    IMU_ACC_SCAL1_X,
    IMU_ACC_SCAL1_Y,
    IMU_ACC_SCAL1_Z,
    IMU_ACC_SCAL2_X,
    IMU_ACC_SCAL2_Y,
    IMU_ACC_SCAL2_Z,
    IMU_ACC_SCAL3_X,
    IMU_ACC_SCAL3_Y,
    IMU_ACC_SCAL3_Z,
    IMU_ACC_ALGN_XY,
    IMU_ACC_ALGN_XZ,
    IMU_ACC_ALGN_YX,
    IMU_ACC_ALGN_YZ,
    IMU_ACC_ALGN_ZX,
    IMU_ACC_ALGN_ZY,
    IMU_MAG_BIAS_X,
    IMU_MAG_BIAS_Y,
    IMU_MAG_BIAS_Z,
    IMU_MAG_BIAS1_X,
    IMU_MAG_BIAS1_Y,
    IMU_MAG_BIAS1_Z,
    IMU_MAG_BIAS2_X,
    IMU_MAG_BIAS2_Y,
    IMU_MAG_BIAS2_Z,
    IMU_MAG_BIAS3_X,
    IMU_MAG_BIAS3_Y,
    IMU_MAG_BIAS3_Z,
    IMU_MAG_SCAL_X,
    IMU_MAG_SCAL_Y,
    IMU_MAG_SCAL_Z,
    IMU_MAG_SCAL1_X,
    IMU_MAG_SCAL1_Y,
    IMU_MAG_SCAL1_Z,
    IMU_MAG_SCAL2_X,
    IMU_MAG_SCAL2_Y,
    IMU_MAG_SCAL2_Z,
    IMU_MAG_SCAL3_X,
    IMU_MAG_SCAL3_Y,
    IMU_MAG_SCAL3_Z,
    IMU_MAG_ALGN_XY,
    IMU_MAG_ALGN_XZ,
    IMU_MAG_ALGN_YX,
    IMU_MAG_ALGN_YZ,
    IMU_MAG_ALGN_ZX,
    IMU_MAG_ALGN_ZY,
    IMU_GYO_BIAS_X,
    IMU_GYO_BIAS_Y,
    IMU_GYO_BIAS_Z,
    IMU_GYO_BIAS1_X,
    IMU_GYO_BIAS1_Y,
    IMU_GYO_BIAS1_Z,
    IMU_GYO_BIAS2_X,
    IMU_GYO_BIAS2_Y,
    IMU_GYO_BIAS2_Z,
    IMU_GYO_BIAS3_X,
    IMU_GYO_BIAS3_Y,
    IMU_GYO_BIAS3_Z,
    IMU_GYO_SCAL_X,
    IMU_GYO_SCAL_Y,
    IMU_GYO_SCAL_Z,
    IMU_GYO_ALGN_XY,
    IMU_GYO_ALGN_XZ,
    IMU_GYO_ALGN_YX,
    IMU_GYO_ALGN_YZ,
    IMU_GYO_ALGN_ZX,
    IMU_GYO_ALGN_ZY,
    IMU_MAG_INCL,
    IMU_MAG_DECL,
    IMU_PRESS_SENSE,
    GMBL_PITCH_PORT,
    GMBL_ROLL_PORT,
    GMBL_PWM_MAX,
    GMBL_PWM_MIN,
    GMBL_NTRL_PITCH,
    GMBL_NTRL_ROLL,
    GMBL_SCAL_PITCH,
    GMBL_SCAL_ROLL,
    GMBL_SLEW_RATE,
    SPVR_LOW_BAT1,
    SPVR_LOW_BAT2,
    SPVR_BAT_CRV1,
    SPVR_BAT_CRV2,
    SPVR_BAT_CRV3,
    SPVR_BAT_CRV4,
    SPVR_BAT_CRV5,
    SPVR_BAT_CRV6,
    UKF_VEL_Q,
    UKF_VEL_ALT_Q,
    UKF_POS_Q,
    UKF_POS_ALT_Q,
    UKF_ACC_BIAS_Q,
    UKF_GYO_BIAS_Q,
    UKF_QUAT_Q,
    UKF_PRES_ALT_Q,
    UKF_ACC_BIAS_V,
    UKF_GYO_BIAS_V,
    UKF_RATE_V,
    UKF_PRES_ALT_V,
    UKF_POS_V,
    UKF_VEL_V,
    UKF_ALT_POS_V,
    UKF_ALT_VEL_V,
    UKF_GPS_POS_N,
    UKF_GPS_POS_M_N,
    UKF_GPS_ALT_N,
    UKF_GPS_ALT_M_N,
    UKF_GPS_VEL_N,
    UKF_GPS_VEL_M_N,
    UKF_GPS_VD_N,
    UKF_GPS_VD_M_N,
    UKF_ALT_N,
    UKF_ACC_N,
    UKF_DIST_N,
    UKF_MAG_N,
    UKF_POS_DELAY,
    UKF_VEL_DELAY,
    VN100_MAG_BIAS_X,
    VN100_MAG_BIAS_Y,
    VN100_MAG_BIAS_Z,
    VN100_MAG_SCAL_X,
    VN100_MAG_SCAL_Y,
    VN100_MAG_SCAL_Z,
    VN100_MAG_ALGN_XY,
    VN100_MAG_ALGN_XZ,
    VN100_MAG_ALGN_YX,
    VN100_MAG_ALGN_YZ,
    VN100_MAG_ALGN_ZX,
    VN100_MAG_ALGN_ZY,
    L1_ATT_J_ROLL,
    L1_ATT_J_PITCH,
    L1_ATT_J_YAW,
    L1_ATT_AM1,
    L1_ATT_AM2,
    L1_ATT_T2R_A1,
    L1_ATT_T2R_A2,
    L1_ATT_PROP_K1,
    L1_ATT_MAX_RATE,
    L1_ATT_MAX_OUT,
    L1_ATT_QUAT_TAU,
    L1_ATT_L1_ASP,
    L1_ATT_L1_K1,
    L1_ATT_PWM_LO,
    L1_ATT_PWM_HI,
    L1_ATT_PWM_SCALE,
    L1_ATT_MM_R01,
    L1_ATT_MM_P01,
    L1_ATT_MM_Y01,
    L1_ATT_MM_R02,
    L1_ATT_MM_P02,
    L1_ATT_MM_Y02,
    L1_ATT_MM_R03,
    L1_ATT_MM_P03,
    L1_ATT_MM_Y03,
    L1_ATT_MM_R04,
    L1_ATT_MM_P04,
    L1_ATT_MM_Y04,
    L1_ATT_MM_R05,
    L1_ATT_MM_P05,
    L1_ATT_MM_Y05,
    L1_ATT_MM_R06,
    L1_ATT_MM_P06,
    L1_ATT_MM_Y06,
    L1_ATT_MM_R07,
    L1_ATT_MM_P07,
    L1_ATT_MM_Y07,
    L1_ATT_MM_R08,
    L1_ATT_MM_P08,
    L1_ATT_MM_Y08,
    L1_ATT_MM_R09,
    L1_ATT_MM_P09,
    L1_ATT_MM_Y09,
    L1_ATT_MM_R10,
    L1_ATT_MM_P10,
    L1_ATT_MM_Y10,
    L1_ATT_MM_R11,
    L1_ATT_MM_P11,
    L1_ATT_MM_Y11,
    L1_ATT_MM_R12,
    L1_ATT_MM_P12,
    L1_ATT_MM_Y12,
    L1_ATT_MM_R13,
    L1_ATT_MM_P13,
    L1_ATT_MM_Y13,
    L1_ATT_MM_R14,
    L1_ATT_MM_P14,
    L1_ATT_MM_Y14,
    CONFIG_NUM_PARAMS
};

typedef struct {
    unsigned int paramId;
    unsigned int num;
    float values[248];
} __attribute__((packed)) paramStruct_t;

extern float p[CONFIG_NUM_PARAMS];
extern const char *configParameterStrings[];

extern void configInit(void);
extern void configFlashRead(void);
extern unsigned char configFlashWrite(void);
extern void configLoadDefault(void);
extern unsigned int configParameterRead(void *data);
extern unsigned int configParameterWrite(void *data);
extern int8_t configReadFile(char *fname);
extern int8_t configWriteFile(char *fname);

#endif
