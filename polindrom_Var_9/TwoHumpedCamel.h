#pragma once
#include "Camel.h"
class TwoHumpedCamel :
	public Camel
{
public:
	TwoHumpedCamel(string);
	string get_info();
	string say();
};
