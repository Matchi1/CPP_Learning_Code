#include "Clock.h"

Clock::Clock()
    : _sec_hand { _min_hand }
{}

void Clock::tick()
{
    _sec_hand.advance();
}

void Clock::add_event(const Event& event)
{
    _events.emplace_back(event); 
}

std::ostream& operator<<(std::ostream& cout, const Clock& clock)
{
    return cout << clock._min_hand.get_minutes() << " min " << clock._sec_hand.get_seconds() << " sec";
}
