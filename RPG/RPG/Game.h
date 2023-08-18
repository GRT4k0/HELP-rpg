#pragma once
#include <iostream>
#include <ctime>
#include "Function.h"
#include "Character.h"
#include <string>
#include <iomanip>

using namespace std;

class Game
{
public:

	Game();
	virtual ~Game();

	//Ops

	//Functions
	void initGame();
	void mainMenu();

	//Accessors
	inline bool getPlaying() const { return this->playing; }
		 
private:
	int choice;
	bool playing;

	//Character Related	
	Character character;
};

