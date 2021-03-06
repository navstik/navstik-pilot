/****************************************************************************
 *
 *   Copyright (C) 2012 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file objects_common.cpp
 *
 * Common object definitions without a better home.
 */

#include <nuttx/config.h>

#include <drivers/drv_orb_dev.h>

#include <drivers/drv_mag.h>
ORB_DEFINE(sensor_mag, struct mag_report);

#include <drivers/drv_accel.h>
ORB_DEFINE(sensor_accel, struct accel_report);

#include <drivers/drv_gyro.h>
ORB_DEFINE(sensor_gyro, struct gyro_report);

#include <drivers/drv_baro.h>
ORB_DEFINE(sensor_baro, struct baro_report);

#include <drivers/drv_pwm_output.h>
ORB_DEFINE(output_pwm, struct pwm_output_values);

#include <drivers/drv_rc_input.h>
ORB_DEFINE(input_rc, struct rc_input_values);

#include "topics/vehicle_attitude.h"
ORB_DEFINE(vehicle_attitude, struct vehicle_attitude_s);

#include "topics/airspeed.h"
ORB_DEFINE(airspeed, struct airspeed_s);

#include "topics/sensor_combined.h"
ORB_DEFINE(sensor_combined, struct sensor_combined_s);

#include "topics/vehicle_gps_position.h"
ORB_DEFINE(vehicle_gps_position, struct vehicle_gps_position_s);

#include "topics/home_position.h"
ORB_DEFINE(home_position, struct home_position_s);

#include "topics/vehicle_status.h"
ORB_DEFINE(vehicle_status, struct vehicle_status_s);

#include "topics/battery_status.h"
ORB_DEFINE(battery_status, struct battery_status_s);

#include "topics/vehicle_global_position.h"
ORB_DEFINE(vehicle_global_position, struct vehicle_global_position_s);

#include "topics/vehicle_local_position.h"
ORB_DEFINE(vehicle_local_position, struct vehicle_local_position_s);

#include "topics/vehicle_vicon_position.h"
ORB_DEFINE(vehicle_vicon_position, struct vehicle_vicon_position_s);

#include "topics/vehicle_rates_setpoint.h"
ORB_DEFINE(vehicle_rates_setpoint, struct vehicle_rates_setpoint_s);

#include "topics/rc_channels.h"
ORB_DEFINE(rc_channels, struct rc_channels_s);

#include "topics/vehicle_command.h"
ORB_DEFINE(vehicle_command, struct vehicle_command_s);

#include "topics/vehicle_local_position_setpoint.h"
ORB_DEFINE(vehicle_local_position_setpoint, struct vehicle_local_position_setpoint_s);

#include "topics/vehicle_global_position_setpoint.h"
ORB_DEFINE(vehicle_global_position_setpoint, struct vehicle_global_position_setpoint_s);

#include "topics/vehicle_global_position_set_triplet.h"
ORB_DEFINE(vehicle_global_position_set_triplet, struct vehicle_global_position_set_triplet_s);

#include "topics/vehicle_attitude_setpoint.h"
ORB_DEFINE(vehicle_attitude_setpoint, struct vehicle_attitude_setpoint_s);

#include "topics/manual_control_setpoint.h"
ORB_DEFINE(manual_control_setpoint, struct manual_control_setpoint_s);

#include "topics/offboard_control_setpoint.h"
ORB_DEFINE(offboard_control_setpoint, struct offboard_control_setpoint_s);

#include "topics/optical_flow.h"
ORB_DEFINE(optical_flow, struct optical_flow_s);

#include "topics/omnidirectional_flow.h"
ORB_DEFINE(omnidirectional_flow, struct omnidirectional_flow_s);

#include "topics/differential_pressure.h"
ORB_DEFINE(differential_pressure, struct differential_pressure_s);

#include "topics/subsystem_info.h"
ORB_DEFINE(subsystem_info, struct subsystem_info_s);

/* actuator controls, as requested by controller */
#include "topics/actuator_controls.h"
ORB_DEFINE(actuator_controls_0, struct actuator_controls_s);
ORB_DEFINE(actuator_controls_1, struct actuator_controls_s);
ORB_DEFINE(actuator_controls_2, struct actuator_controls_s);
ORB_DEFINE(actuator_controls_3, struct actuator_controls_s);
ORB_DEFINE(actuator_armed, struct actuator_armed_s);

/* actuator controls, as set by actuators / mixers after limiting */
#include "topics/actuator_controls_effective.h"
ORB_DEFINE(actuator_controls_effective_0, struct actuator_controls_effective_s);
ORB_DEFINE(actuator_controls_effective_1, struct actuator_controls_effective_s);
ORB_DEFINE(actuator_controls_effective_2, struct actuator_controls_effective_s);
ORB_DEFINE(actuator_controls_effective_3, struct actuator_controls_effective_s);

#include "topics/actuator_outputs.h"
ORB_DEFINE(actuator_outputs_0, struct actuator_outputs_s);
ORB_DEFINE(actuator_outputs_1, struct actuator_outputs_s);
ORB_DEFINE(actuator_outputs_2, struct actuator_outputs_s);
ORB_DEFINE(actuator_outputs_3, struct actuator_outputs_s);

#include "topics/debug_key_value.h"
ORB_DEFINE(debug_key_value, struct debug_key_value_s);
