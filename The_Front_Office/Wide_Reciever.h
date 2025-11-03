#pragma once
#include <iostream>
#include "Player.h"

// Matthew Romano - The Front Office - Nov 2nd, 2025
// Wide Reciever class declaration

// Includes Wide Reciever specific functions and attributes.
class WideReciever : private Player
{
	int deepThreat;
	int playMaker;
	int athletisism;

public:
	void setDT(int deepThreat);
	int getDT();

	void setPM(int playMaker);
	int getPM();

	void setA(int athletisism);
	int getA();
};
