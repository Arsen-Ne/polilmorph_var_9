#include "ArabianHorse.h"

ArabianHorse::ArabianHorse(string name, double speed)
		:Horse(name, speed) {};

ArabianHorse::ArabianHorse(string name, double speed, string runType)
		:Horse(name, speed, runType) {};

string ArabianHorse::get_info() {
	return "арабская скаковая лошадь";
}


