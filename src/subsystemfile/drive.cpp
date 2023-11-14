#include "main.h"

void setMotorDriveVoltage(int left, int right)
{

    bottomRightMotor.move(right);
    topRightMotor.move(right);
    frontRightMotor.move(right);
    topLeftMotor.move(left);
    topLeftMotor.move(left);
    frontLeftMotor.move(left);
}

void setMotors()
{
    int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);

    if (abs(leftJoystick) < 5)
    {
        leftJoystick = 0;
    }
    if (abs(rightJoystick) < 5)
    {
        rightJoystick = 0;
    }

    setMotorDriveVoltage(leftJoystick + rightJoystick, leftJoystick - rightJoystick);
}