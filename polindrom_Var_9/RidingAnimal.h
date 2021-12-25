#pragma once
#include <string>
using namespace std;
class RidingAnimal
{
private:
	string m_name;

protected:
	double m_speed;
	RidingAnimal(string, double);

public:
	virtual string say() = 0;
	virtual string get_info();
	virtual string run_into();
	string get_name();
};


