#include "main.h"

void initialize() {}
void disabled() {}
void competition_initialize() {}

void autonomous()
{
	// auton here
	// code pid and odom in other files, run them here
}

void opcontrol()
{
	pair<bool, bool> pastthencur = {false, false};
	while (1)
	{

		setMotors();
		setIntake();
		setLift();
		pastthencur = setLoad(pastthencur.first, pastthencur.second);

		pros::delay(10); // 10 milliseconds
	}
}
