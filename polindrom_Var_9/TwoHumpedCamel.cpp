#include "TwoHumpedCamel.h"

TwoHumpedCamel::TwoHumpedCamel(string name) : Camel(name) {};

string TwoHumpedCamel::get_info() {
	// ����� ������ Riding Animal ����������
	return RidingAnimal::get_info() + " � ����� �������";
}

string TwoHumpedCamel::say() {
	return Camel::say() + " ��� ����";
}

