#include "MinuteHand.h"
#include <iostream>

MinuteHand::MinuteHand()
	: _minutes { 0 }
{
	std::cout << "starting minute hand" << std::endl;
}

unsigned int MinuteHand::get_minutes() const
{
	return _minutes;
}

void MinuteHand::advance()
{
	_minutes++;
}
