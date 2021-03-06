/* List of application requirements, generated during make context. */
{ "math_demo", SCHED_PRIORITY_DEFAULT, 8192, math_demo_main },
{ "control_demo", SCHED_PRIORITY_DEFAULT, 2048, control_demo_main },
{ "kalman_demo", SCHED_PRIORITY_MAX - 30, 2048, kalman_demo_main },
{ "reboot", SCHED_PRIORITY_DEFAULT, 2048, reboot_main },
{ "perf", SCHED_PRIORITY_DEFAULT, 2048, perf_main },
{ "top", SCHED_PRIORITY_DEFAULT - 10, 3000, top_main },
{ "boardinfo", SCHED_PRIORITY_DEFAULT, 2048, boardinfo_main },
{ "mixer", SCHED_PRIORITY_DEFAULT, 4096, mixer_main },
{ "eeprom", SCHED_PRIORITY_DEFAULT, 4096, eeprom_main },
{ "param", SCHED_PRIORITY_DEFAULT, 4096, param_main },
{ "bl_update", SCHED_PRIORITY_DEFAULT, 4096, bl_update_main },
{ "preflight_check", SCHED_PRIORITY_DEFAULT, 2048, preflight_check_main },
{ "delay_test", SCHED_PRIORITY_DEFAULT, 2048, delay_test_main },
{ "uorb", SCHED_PRIORITY_DEFAULT, 4096, uorb_main },
{ "mavlink", SCHED_PRIORITY_DEFAULT, 2048, mavlink_main },
{ "mavlink_onboard", SCHED_PRIORITY_DEFAULT, 2048, mavlink_onboard_main },
{ "gps", SCHED_PRIORITY_DEFAULT, 2048, gps_main },
{ "commander", SCHED_PRIORITY_MAX - 30, 2048, commander_main },
{ "sdlog", SCHED_PRIORITY_MAX - 30, 2048, sdlog_main },
{ "sensors", SCHED_PRIORITY_MAX-5, 4096, sensors_main },
{ "ardrone_interface", SCHED_PRIORITY_MAX - 15, 2048, ardrone_interface_main },
{ "multirotor_att_control", SCHED_PRIORITY_MAX - 15, 2048, multirotor_att_control_main },
{ "multirotor_pos_control", SCHED_PRIORITY_MAX - 25, 2048, multirotor_pos_control_main },
{ "fixedwing_att_control", SCHED_PRIORITY_MAX - 30, 2048, fixedwing_att_control_main },
{ "fixedwing_pos_control", SCHED_PRIORITY_MAX - 30, 2048, fixedwing_pos_control_main },
{ "position_estimator", SCHED_PRIORITY_DEFAULT, 4096, position_estimator_main },
{ "attitude_estimator_ekf", SCHED_PRIORITY_DEFAULT, 2048, attitude_estimator_ekf_main },
{ "ms5611", SCHED_PRIORITY_DEFAULT, 2048, ms5611_main },
{ "hmc5883", SCHED_PRIORITY_DEFAULT, 4096, hmc5883_main },
{ "mpu60x0", SCHED_PRIORITY_DEFAULT, 4096, mpu60x0_main },
{ "bmp180", SCHED_PRIORITY_DEFAULT, 2048, bmp180_main },
{ "l3gd20", SCHED_PRIORITY_DEFAULT, 2048, l3gd20_main },
{ "px4io", SCHED_PRIORITY_DEFAULT, 2048, px4io_main },
{ "blinkm", SCHED_PRIORITY_DEFAULT, 2048, blinkm_main },
{ "adc", SCHED_PRIORITY_DEFAULT, 2048, adc_main },
{ "fmu", SCHED_PRIORITY_DEFAULT, 2048, fmu_main },
{ "hil", SCHED_PRIORITY_DEFAULT, 2048, hil_main },
{ "tests", SCHED_PRIORITY_DEFAULT, 12000, tests_main },
{ "sercon", SCHED_PRIORITY_DEFAULT, 2048, sercon_main },
{ "serdis", SCHED_PRIORITY_DEFAULT, 2048, serdis_main },
