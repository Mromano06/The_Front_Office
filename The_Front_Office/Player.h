#pragma once
#include <iostream>
#include "Entity.h"

// Matthew Romano - The Front Office - Oct 6th, 2025
// Player class declaration

// Superclass for each position, includes basic physical attributes.
class Player : private Entity
{
	std::string firstName;
	std::string lastName;
	int playerRating;
	double tradeValue;
	int speed;
	int agility;
	int strength;
	int intellegence;
	int discipline;
	int health;

public:
	void showAttributes();

	void setFirstName(std::string firstName);
	std::string getFirstName();

	void setLastName(std::string lastName);
	std::string getFirstName();

	void setPlayerRating(int playerRating);
	int getPlayerRating();

	void setTradeValue(int tradeValue);
	int gettradeValue();

	void setSpeed(int speed);
	int getSpeed();

	void setAgility(int agility);
	int setAgility();

	void setStrength(int strength);
	int getStrength();

	void setIntellegence(int intelligence);
	int getIntellegence();

	void setDiscipline(int discipline);
	int getDiscipline();

	void setHealth(int health);
	int getHealth();
};
