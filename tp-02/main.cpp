#include "MinuteHand.h"
#include "SecondHand.h"
#include "Clock.h"
#include <iostream>

int main()
{
	MinuteHand minute1; // starting minute hand

	minute1.advance();
	minute1.advance();
	std::cout << minute1.get_minutes() << std::endl; // 2

	minute1.advance();
	std::cout << minute1.get_minutes() << std::endl; // 3

	SecondHand second1(minute1);
	std::cout << second1.get_seconds() << std::endl; // 0
	for(auto i = 0; i < 60; i++)
	{
		second1.advance();
	}
	std::cout << second1.get_seconds() << std::endl; // 0
	std::cout << minute1.get_minutes() << std::endl; // 4

	Clock clock;
	for(auto i = 0; i < 63; i++)
	{
		clock.tick();
	}
	std::cout << clock << std::endl; // 1 min 3 sec 
	return 0;
}
