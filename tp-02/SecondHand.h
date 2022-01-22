#pragma once

#include "MinuteHand.h"

class SecondHand
{
public:
	SecondHand(MinuteHand&);
	unsigned int get_seconds() const;
	void advance();
private:
	unsigned int _seconds;
	MinuteHand& _min_hand;
};
