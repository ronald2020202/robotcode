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
	pair<bool, bool> wingbool = {false, false};
	pair<bool, bool> liftbool = {false, false};

	while (1)
	{

		setMotors();
		setIntake();
		liftbool = autoLift(liftbool.first, liftbool.second);
		setLift();
		pastthencur = setLoad(pastthencur.first, pastthencur.second);
		wingbool = wings(wingbool.first, wingbool.second);

		pros::delay(10); // 10 milliseconds
	}
}
