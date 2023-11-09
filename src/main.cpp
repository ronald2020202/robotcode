#include "main.h"

void initialize() {}
void disabled() {}
void competition_initialize() {}





void autonomous() {
	//auton here
	//code pid and odom in other files, run them here
}





void opcontrol() {
	bool past = false;
	while(1) {
		
		setMotors();
		setIntake();
		setLift();
		past = setLoad(past);

		pros::delay(10);//10 milliseconds
	}
}




