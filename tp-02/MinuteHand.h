#pragma once 

class MinuteHand
{
public:
	MinuteHand();
	unsigned int get_minutes() const;
	void advance();
private:
	unsigned int _minutes;
};
