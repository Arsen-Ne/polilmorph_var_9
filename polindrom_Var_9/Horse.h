#pragma once
#include "RidingAnimal.h"
class Horse :
    public RidingAnimal
{
private:
	string m_run_type;
public:
	Horse(string, double);
	Horse(string, double, string);

	virtual string run_into();
	virtual string say();
};

