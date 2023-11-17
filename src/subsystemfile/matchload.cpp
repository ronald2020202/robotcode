#include "main.h"

void setLoadVoltage(int power)
{
    scorerleft.move(power);
    scorerright.move(power);
}

pair<bool, bool> setLoad(bool past, bool cur)
{
    bool ATON = controller.get_digital(pros::E_CONTROLLER_DIGITAL_A);
    if (!past && ATON)
    {
        cur = true;
    }
    else if (past && !ATON)
    {
        cur = false;
    }

    setLoadVoltage(127 * cur);

    return {ATON, cur};
}