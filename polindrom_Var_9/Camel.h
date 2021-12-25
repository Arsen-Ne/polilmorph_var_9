#pragma once
#include "RidingAnimal.h"
class Camel : public RidingAnimal
{
public:
	Camel(string name);
	virtual string say();
	virtual string get_info();
};
