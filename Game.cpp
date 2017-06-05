/*
	Connect Four - an accurate representation of the real-life game coded in C++17.
	Author: Boris Trifkovic
	Language: C++17
	Version: 0.01

	This work is licensed under the GPLv2 Free Software license, and may be treated as such.
	You may use, share, modify and redistribute this code as you like, as long as this disclaimer remains a part of it.
*/

/// We include the SDK in order to access shared functions.
#include "SDK.h"

/// We allow these variables to be accessed anywhere from the SDK header.
CAI* Game::Fisherman;
CGame* Game::Self;
CBoard* Game::Board;

/// Sets up the game board in order for the game to run properly
void CGame::Setup(void)
{
	Game::Board->Setup(); // Silently sets up the game board, so we don't have to worry about that further on.

	std::cout << "Welcome to Connect-Four!" << std::endl; // Prints the game 'meta', and asks for the user's name.
	std::cout << "Please enter your name: " << std::endl;
	this->szPlayerName = this->GetPlayerName(); // Gets the player name and stores it in our class variable for later use.

}

void CGame::Run(void)
{

}

char* CGame::GetPlayerName(void)
{
	std::string szGetName = nullptr; // Creates a variable which contains the name and will be used to return in, also initializes it.
	
	do // loops our code until the player name is entered properly.
	{
		
	} while (szGetName.length() < 3);
}