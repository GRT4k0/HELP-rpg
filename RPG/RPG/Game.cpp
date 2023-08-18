#include "Game.h"

Game::Game()
{
	choice = 0;
	playing = true;
}

Game::~Game()
{

}

//Functions 
void Game::initGame()
{
	string name;
	cout << "Enter name for Character" << endl;
	getline(cin, name);

	character.initialize(name);

}

void Game::mainMenu()
{
	cout << "= MAIN MENU =" << endl;
	cout << "0: Quit" << endl;
	cout << "1: Travel" << endl;
	cout << "2: Shop" << endl;
	cout << "3: Level up" << endl;
	cout << "4: Rest" << endl;
	cout << "5: Character Sheet" << endl;
	cout << endl;

	cout << endl << "Make your Choice, Champion" << endl;
	cin >> choice;
	cout << endl;


	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 5:
		character.printStats();

		break;
	default:
		break;
	}
}
