#include "OneHumpedCamel.h"

OneHumpedCamel::OneHumpedCamel(string name) : Camel(name) {};

string OneHumpedCamel::get_info() {
	return "���������� " + Camel::get_info();
}
