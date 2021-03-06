#pragma config(Sensor, in1,    catapult_sensor, sensorPotentiometer)
#pragma config(Motor,  port1,           intake_motor,  tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           right_front,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           right_back,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           left_back,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           left_front,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           catapult_1,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           catapult_2,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           cap_flip,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX2)
#pragma competitionControl(Competition)

#include "Mod_Vex_Comp_Control.c"
#include "motor.h"
#include "catapult.c"

void
pre_auton() {
}

task
autonomous() {
}

task
usercontrol() {
	startTask(catapult_task);
	while (true) {
		tank(vexRT[Ch3], vexRT[Ch2]);

		intake((vexRT[Btn6U]-vexRT[Btn6D])*127);

		descorer((vexRT[Btn8D]-vexRT[Btn8R])*127);

		delay(20);
	}
}
