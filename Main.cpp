/*
	Connect Four - an accurate representation of the real-life game coded in C++17.
	Author: Boris Trifkovic (hollow)
	Language: C++17
	Version: 0.01	

	This work is licensed under the GPLv2 Free Software license, and may be treated as such.
	You may use, share, modify and redistribute this code as you like, as long as this disclaimer remains a part of it.
*/

/// Importing all of our 'includes', in order for our code to work properly.
#include "SDK.h"

/// Defining the entry-point for our application, in which all our code will run.
int main(void)
{
	Game::Self->Setup(); // Grabs user information and sets up the game to be played.
	
	for (;;)
	{
		Game::Fisherman->Think();
		Game::Board->Draw();
		Game::Board->Update();
	}

	return ReturnValue_t::EXECUTED_SUCCESSFULLY;
}