#include "Camel.h"

Camel::Camel(string name) : RidingAnimal(name, 0) {}

string Camel::get_info() {
	return "�������";
}
string Camel::say() {
	return "����� ������ � ���� �������";
}
