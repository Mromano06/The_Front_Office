#pragma once
#include <iostream>
#include "Player.h"

// Matthew Romano - The Front Office - Oct 7th, 2025
// Quarterback class declaration

// Includes Quarterback specific functions and attributes.
class Quarterback : private Player
{
	int pocketPasser;
	int rocketArm;
	int dualThreat;

public:
	void setPP(int pocketPasser);
	int getPP();

	void setRA(int rocketArm);
	int getRA();

	void setDT(int dualThreat);
	int getRA();
};

