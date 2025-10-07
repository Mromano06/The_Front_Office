#pragma once
#include <iostream>

// Matthew Romano - The Front Office - Oct 6th, 2025
// Player class declaration

/* Basic Physical Attributes:
Names
Rating
Potential 
Speed
Strength
Agility
Intelligence

*/


class Player
{
	std::string firstName;
	std::string lastName;
	int playerRating;
	double tradeValue;
	int speed;
	int agility;
	int strength;
	int intelligence;
	int discipline;
	int health;

public:
	void setFirstName(std::string firstName) {
		this->firstName = firstName;
	}

	std::string getFirstName() {
		return firstName;
	}

	void setLastName(std::string lastName) {
		this->lastName = lastName;
	}

	std::string getFirstName() {
		return firstName;
	}

};
