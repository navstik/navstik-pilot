/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

#ifndef __AP_INERTIAL_SENSOR_NAVSTIK_H__
#define __AP_INERTIAL_SENSOR_NAVSTIK_H__

#include <AP_HAL.h>
#if CONFIG_HAL_BOARD == HAL_BOARD_NAVSTIK

#include <AP_Progmem.h>
#include "AP_InertialSensor.h"
#include <drivers/drv_accel.h>
#include <drivers/drv_gyro.h>
#include <uORB/uORB.h>
#include <uORB/topics/sensor_combined.h>

class AP_InertialSensor_Navstik : public AP_InertialSensor
{
public:

    AP_InertialSensor_Navstik() {}

    /* Concrete implementation of AP_InertialSensor functions: */
    bool            update();
    bool            new_data_available();
    float           temperature();
    float        	get_delta_time();
    uint32_t        get_last_sample_time_micros();
    float           get_gyro_drift_rate();
    uint16_t        num_samples_available();

private:
    uint16_t        _init_sensor( Sample_rate sample_rate );
    static		    void _ins_timer(uint32_t now);
    static          void _accumulate(void);
    uint64_t        _last_update_usec;
    float           _delta_time;
    static Vector3f	_accel_sum;
    static uint32_t _accel_sum_count;
    static Vector3f	_gyro_sum;
    static uint32_t _gyro_sum_count;
    static volatile bool _in_accumulate;
    static uint64_t _last_accel_timestamp;
    static uint64_t _last_gyro_timestamp;
    uint8_t  _sample_divider;

    // accelerometer and gyro driver handles
    static int _accel_fd;
    static int _gyro_fd;
};
#endif
#endif // __AP_INERTIAL_SENSOR_NAVSTIK_H__
