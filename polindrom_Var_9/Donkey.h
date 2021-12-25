#pragma once
#include "RidingAnimal.h"
class Donkey : public RidingAnimal
{
public:
	Donkey(string, double);
	string get_info();
	string run_into();
	string say();
};

