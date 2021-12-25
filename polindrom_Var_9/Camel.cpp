#include "Camel.h"

Camel::Camel(string name) : RidingAnimal(name, 0) {}

string Camel::get_info() {
	return "верблюд";
}
string Camel::say() {
	return "молча плюнул в вашу сторону";
}
