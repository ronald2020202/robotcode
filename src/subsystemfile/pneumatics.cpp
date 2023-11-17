#include "main.h"

pair<bool, bool> wings(bool past, bool cur)
{

    bool XTON = controller.get_digital(pros::E_CONTROLLER_DIGITAL_X);
    if (!past && XTON)
    {
        cur = true;
    }
    else if (past && !XTON)
    {
        cur = false;
    }

    wingpneumatics.set_value(cur);

    return {XTON, cur};
}