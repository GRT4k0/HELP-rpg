#pragma once
#include "Game.h"
#include <cmath>

class Character
{
public:
	Character();
	virtual ~Character();

	//Functions 
	void initialize (string Name);
	void printStats() const;
	void LevelUp();

	//Accessors
	inline	const int& getlevel() const { return this->level; }
	inline	const double& getX() const { return this->xPos; }
	inline	const double& getY() const { return this->yPos; }
	inline const string& getName() const { return this->Name; }
	inline	const int& getexp() const { return this->exp; }
	inline	const int& getexpNext() const {return this->expNext; }
	inline	const int& gethp() const { return this->hp; }
	inline	const int& gethpMax() const { return this->hpMax; }
	inline	const int& getstaminna() const { return this->stamina; }
	inline	const int& getstaminnaMax() const { return this->staminaMax; }
	inline	const int& getdamageMin() const { return this->damageMin; }
	inline	const int& getdamageMax() const { return this->damageMax; }
	inline	const int& getdefence() const { return this->defence; }

		
	//Modifiers 

private:
	double xPos;
	double yPos;

	int level;
	int exp;
	int expNext;

	int strength;
	int vitality;
	int dexterity;
	int intelligence;

	int hp;
	int hpMax;
	int stamina;
	int staminaMax;
	int damageMin;
	int damageMax;
	int defence;
	int luck;
	
	

	int statPoints;
	int skillPoints;

	string Name;

};

