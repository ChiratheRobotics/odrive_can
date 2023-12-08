// Copyright (c) 2023 Chirathe Robotics
// All rights reserved.
/// @file odrive_struct.hpp
/// @author Pranav Kumar
/// @date Dec 7, 2023
/// @brief Description: derived interface class from actuator interface


#ifndef ODRIVE_STRUCT_HPP
#define ODRIVE_STRUCT_HPP

#include <stdint.h>
#include <stdio.h>
#include <stddef.h>

typedef struct
{
    float bus_voltage;
    float bus_current;
    float fet_temperature;
    float motor_temperature;
    uint32_t active_errors;
    uint32_t disarm_reason;
} OdriveStatusMsg;

typedef struct
{
    uint32_t control_mode;
    uint32_t input_mode;
    float input_pos;
    float input_vel;
    float input_torque;
} OdriveControlMsg;

typedef struct
{
    float pos_estimate;
    float vel_estimate;
    float torque_target;
    float torque_estimate;
    float iq_setpoint;
    float iq_measured;
    uint32_t active_errors;
    uint8_t axis_state;
    uint8_t procedure_result;
    bool trajectory_done_flag;
} OdriveControllerStatusMsg;

typedef struct
{
    uint32_t axis_requested_state;
    //---
    uint32_t active_errors;
    uint8_t axis_state;
    uint8_t procedure_result;
}OdriveAxisStateService;

#endif //ODRIVE_STRUCT_HPP