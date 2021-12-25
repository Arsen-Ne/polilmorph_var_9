#pragma once
#include "Horse.h"
class ArabianHorse :
	public Horse
{
public:
	ArabianHorse(string, double);
	ArabianHorse(string, double, string);

	string get_info();
};


