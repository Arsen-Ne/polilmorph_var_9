#include "Horse.h"
#include <sstream>

Horse::Horse(string name, double speed)
		:RidingAnimal(name, speed) {}

Horse::Horse(string name, double speed, string runType)
		:RidingAnimal(name, speed), m_run_type(runType) {}


string Horse::run_into() {
	stringstream ss;
	ss << "сo скоростью " << RidingAnimal::m_speed << "км/ч ";
	if (!m_run_type.empty()) {
		ss << m_run_type << " ";
	}
	ss << "врывается";
	return ss.str();
}

string Horse::say() {
	return "Всем игого!";
}
