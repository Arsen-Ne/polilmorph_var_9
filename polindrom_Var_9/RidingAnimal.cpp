#include "RidingAnimal.h"

RidingAnimal::RidingAnimal(string name, double speed)
	:m_name(name), m_speed(speed) {};

string RidingAnimal::get_info() {
	return "представитель неизвестного вида";
}

string RidingAnimal::run_into() {
	return "забежал";
}

string RidingAnimal::get_name() {
	return m_name;
}
