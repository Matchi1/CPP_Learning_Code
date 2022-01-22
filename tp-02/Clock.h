#pragma once

#include "MinuteHand.h"
#include "SecondHand.h"
#include <iostream>

class Clock
{
public:
	Clock();
	void tick ();
	friend std::ostream& operator<<(std::ostream& cout, const Clock& clock);
private:
	MinuteHand _min_hand;
	SecondHand _sec_hand;
};
