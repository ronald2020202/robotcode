#include "main.h"

void setLoadVoltage(int power)
{
    scorerleft.move(power);
    scorerright.move(power);
}

pair<bool, bool> setLoad(bool past, bool cur)
{
    bool L1TON = controller.get_digital(pros::E_CONTROLLER_DIGITAL_X);
    if (!past && L1TON)
    {
        cur = true;
    }
    else if (past && !L1TON)
    {
        cur = false;
    }

    setLoadVoltage(127 * cur);

    return {L1TON, cur};
}