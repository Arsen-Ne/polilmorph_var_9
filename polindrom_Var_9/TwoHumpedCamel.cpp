#include "TwoHumpedCamel.h"

TwoHumpedCamel::TwoHumpedCamel(string name) : Camel(name) {};

string TwoHumpedCamel::get_info() {
	// вызов метода Riding Animal специально
	return RidingAnimal::get_info() + " с двумя горбами";
}

string TwoHumpedCamel::say() {
	return Camel::say() + " два раза";
}

