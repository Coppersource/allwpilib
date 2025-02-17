/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018-2019 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <stdint.h>

#include "hal/Types.h"

/**
 * @defgroup hal_canapi CAN API Functions
 * @ingroup hal_capi
 * @{
 */

// clang-format off
/**
 * The CAN device type.
 *
 * Teams should use HAL_CAN_Dev_kMiscellaneous
 */
HAL_ENUM(HAL_CANDeviceType) {
  HAL_CAN_Dev_kBroadcast = 0,
  HAL_CAN_Dev_kRobotController = 1,
  HAL_CAN_Dev_kMotorController = 2,
  HAL_CAN_Dev_kRelayController = 3,
  HAL_CAN_Dev_kGyroSensor = 4,
  HAL_CAN_Dev_kAccelerometer = 5,
  HAL_CAN_Dev_kUltrasonicSensor = 6,
  HAL_CAN_Dev_kGearToothSensor = 7,
  HAL_CAN_Dev_kPowerDistribution = 8,
  HAL_CAN_Dev_kPneumatics = 9,
  HAL_CAN_Dev_kMiscellaneous = 10,
  HAL_CAN_Dev_kFirmwareUpdate = 31
};

/**
 * The CAN manufacturer ID.
 *
 * Teams should use HAL_CAN_Man_kTeamUse.
 */
HAL_ENUM(HAL_CANManufacturer) {
  HAL_CAN_Man_kBroadcast = 0,
  HAL_CAN_Man_kNI = 1,
  HAL_CAN_Man_kLM = 2,
  HAL_CAN_Man_kDEKA = 3,
  HAL_CAN_Man_kCTRE = 4,
  HAL_CAN_Man_kREV = 5,
  HAL_CAN_Man_kGrapple = 6,
  HAL_CAN_Man_kMS = 7,
  HAL_CAN_Man_kTeamUse = 8,
  HAL_CAN_Man_kKauaiLabs = 9,
  HAL_CAN_Man_kCopperforge = 10
};
// clang-format on
/** @} */
