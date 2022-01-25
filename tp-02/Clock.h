#pragma once

#include "Event.h"
#include "MinuteHand.h"
#include "SecondHand.h"

#include <iostream>
#include <vector>

class Clock
{
public:
    Clock();
    void                 tick();
    void                 add_event(const Event&);
    friend std::ostream& operator<<(std::ostream& cout, const Clock& clock);

private:
    MinuteHand         _min_hand;
    SecondHand         _sec_hand;
    std::vector<Event> _events;
};
