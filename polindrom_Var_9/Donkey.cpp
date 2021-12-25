#include "Donkey.h"

Donkey::Donkey(string name, double speed)
	:RidingAnimal(name, speed) {}

string Donkey::get_info() {
	return "ослик";
}

string Donkey::run_into() {
	return (m_speed > 1) ? RidingAnimal::run_into() : "медленно и понуро забрел";
}

string Donkey::say() {
	return "иа... ииииааааа...";
}
	

