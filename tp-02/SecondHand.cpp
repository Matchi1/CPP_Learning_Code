#include "SecondHand.h"
#include <iostream>

SecondHand::SecondHand(MinuteHand& hand)
	: _seconds { 0 }
	, _min_hand { hand }
{
	std::cout << "starting second hand" << std::endl;
}

unsigned int SecondHand::get_seconds() const
{
	return _seconds;
}

void SecondHand::advance()
{
	if(++_seconds >= 60)
	{
		_seconds = 0;	
		_min_hand.advance();
	}
}
