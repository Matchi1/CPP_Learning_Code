#include "histogram.h"
#include <iostream>

Histogram::Histogram()
	: Histogram(0, 0)
{}

Histogram::Histogram(int size, int default_value)
	: _count(size, default_value)
{
	for(auto value : _count)
	{
		std::cout << value << std::endl;
	}
}

Histogram::Histogram(const Histogram& hist)
	: _count { hist._count }
{
	std::cout << "constructeur de copie appelé" << std::endl;
}

int main()
{
	Histogram h1, h2;
	Histogram h3 { Histogram { h1 } };
	return 0;
}

