#include "Quarterback.h"
#include <iostream>

// Matthew Romano - The Front Office - Nov 3rd, 2025
// Quarterback class implementation

void Quarterback::setPP(int pocketPasser)
{
	this->pocketPasser = pocketPasser;
}

int Quarterback::getPP() {
	return pocketPasser;
}

void Quarterback::setRA(int rocketArm) {
	this->rocketArm = rocketArm;
}

int Quarterback::getRA() {
	return rocketArm;
}

void Quarterback::setDT(int dualThreat) {
	this->dualThreat = dualThreat;
}

int Quarterback::getRA() {
	return dualThreat;
}