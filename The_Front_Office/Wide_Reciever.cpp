#include "Wide_Reciever.h"
#include <iostream>

// Matthew Romano - The Front Office - Nov 3rd, 2025
// Wide Reciever class implementation

void WideReciever::setDT(int deepThreat) {
	this->deepThreat = deepThreat;
}

int WideReciever::getDT() {
	return deepThreat;
}

void WideReciever::setPM(int playMaker) {
	this->playMaker = playMaker;
}

int WideReciever::getPM() {
	return playMaker;
}

void WideReciever::setA(int athletisism) {
	this->athletisism = athletisism;
}

int WideReciever::getA() {
	return(athletisism);
}