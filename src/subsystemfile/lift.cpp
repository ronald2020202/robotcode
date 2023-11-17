#include "main.h"

void setLiftVoltage(int power)
{
    lift.move(power);
}

void setLift()
{
    bool RIGHTTON = controller.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT);
    bool LEFTTON = controller.get_digital(pros::E_CONTROLLER_DIGITAL_LEFT);

    int liftPower = 127 * (RIGHTTON - LEFTTON);

    setLiftVoltage(liftPower);
}

pair<bool, bool> autoLift(bool past, bool cur)
{
    bool UPTON = controller.get_digital(pros::E_CONTROLLER_DIGITAL_UP);
    if (!past && UPTON)
    {
        cur = true;
    }
    else if (past && !UPTON)
    {
        cur = false;
    }

    // thing

    return {UPTON, cur};
}