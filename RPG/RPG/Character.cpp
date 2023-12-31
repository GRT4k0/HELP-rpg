#include "Character.h"



Character::Character()
{

	this->xPos = 0.0;
	this->yPos = 0.0;
	this->Name = "";
	this->level = 1;
	this->exp = 0;
	this->expNext = 0;
	
	this->strength = 0;
	this->vitality = 0;
	this->dexterity = 0;
	this->intelligence = 0;

	this->hp = 0;
	this->hpMax = 0;
	this->stamina = 0;
	this->staminaMax = 0; 
	this->damageMin = 0;
	this->damageMax = 0;
	this->defence = 0;
	this->luck = 0;
	
	this->statPoints = 0;
	this->skillPoints = 0;
	
	

}


Character::~Character()
{


}


    //Functions
void Character::initialize (string name)
{
	
	this->xPos = 0.0;
	this->yPos = 0.0;

	this->Name = name;
	this->level = 1;
	this->exp = 0;
	this->expNext = 
	static_cast<int>((50 / 3) * ((pow(level, 3) - 
		6 * pow(level, 2)) +
		(17 * level) - 12));

	this->strength = 5;
	this->vitality = 5;
	this->dexterity = 5;
	this->intelligence = 5;
	
	this->hp = 10;
	this->hpMax = 10;
	this->stamina = 10;
	this->staminaMax = 10;
	this->damageMin = 2;
	this->damageMax = 4;
	this->defence = 0;
	this->luck = 1;
	
	this->statPoints = 0;
	this->skillPoints = 0;
	
	
}

void Character:: printStats() const
{
	cout << "Character Sheet =" << endl;
	cout << "= Name: " << this->Name << endl;
	cout << "= Health Points: " << this->hp<< "/" <<this->hpMax << endl;
	cout << "= Level: " << this->level << endl;
	
	cout << endl;

	cout << "= Experience Points: " << this->exp<< endl;
	cout << "= Experience Points till Next Level: " << this->expNext << endl;
	
	cout << endl;
	
	cout << "= Strength: " << this->strength << endl;
	cout << "= Vitality: " << this->vitality << endl;
	cout << "= Dexterity: " << this->dexterity << endl;
	cout << "= Intelligence: " << this->intelligence << endl;
	
	cout << endl;

	cout << "= Stamina: " << this->stamina << "/" << this->staminaMax << endl;
	cout << "= Damage: " << this->damageMax << "-" << this->damageMin << endl;
	cout << "= Defence: " << this->defence << endl;
	cout << "= Luck: " << this->luck<< endl;
	cout << endl;
}

void Character::LevelUp()
{
	while (this->exp >= this->expNext)
	{
		this->exp -= this->expNext;
		this->level++;
		this->expNext =
			static_cast<int>((50 / 3) * ((pow(level, 3) -
				6 * pow(level, 2)) +
				(17 * level) - 12));
			


		this->statPoints++;
		this->skillPoints++;
	}

	
}