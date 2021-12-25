#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <Windows.h> 
#include "RidingAnimal.h"
#include "Camel.h"
#include "OneHumpedCamel.h"
#include "TwoHumpedCamel.h"
#include "Donkey.h"
#include "Horse.h"
#include "ArabianHorse.h"

using namespace std;

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<RidingAnimal*> v;
	v.push_back(new Donkey("Ron", 0.5));
	v.push_back(new Donkey("Lilu", 1.5));
	v.push_back(new Camel("Alibaba"));
	v.push_back(new OneHumpedCamel("Lady"));
	v.push_back(new TwoHumpedCamel("Nick"));	
	v.push_back(new Horse("Daisy", 70));	
	v.push_back(new Horse("Crazy", 25, "иноходью"));
	v.push_back(new ArabianHorse("Mustang", 300, "галопом"));

	for (auto animal : v) {
		cout << "* " << animal->get_info() << " " << animal->run_into() << " в чат * " << endl;
		cout << animal->get_name() << ": " << animal->say() << endl;
	}
}