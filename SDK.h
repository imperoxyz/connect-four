/*
	Connect Four - an accurate representation of the real-life game coded in C++17.
	Author: Boris Trifkovic
	Language: C++17
	Version: 0.01

	This work is licensed under the GPLv2 Free Software license, and may be treated as such.
	You may use, share, modify and redistribute this code as you like, as long as this disclaimer remains a part of it.
*/

/// This header contains all the information that is shared between source files.
/// Even though the project would look more organized with more headers, I personally prefer using only one.
/// With this line, we ensure that our SDK header is only included once
#pragma once 

/// Importing the necessary 'includes' in order for the program to work properly.
#include <iostream>
#include <stdio.h>
#include <array>
#include <vector>
#include <math.h>
#include <time.h>

#define GAME_WIN_CONDITION 4 // This allows another programmer to edit the win condition, changing the game to Connect-5,
							 // for example.

enum ReturnValue_t // This allows our return-codes to be more human-readable.
{
	EXECUTED_SUCCESSFULLY = 0,
	EXECUTED_WITH_ERRORS,
	EXECUTION_FAILED
};

enum WinState_t // This allows our win states to be more human-readable.
{
	WIN_NONE = 0,
	WIN_PLAYER,
	WIN_COMPUTER,
};

enum AIDifficulty_t // This allows our AI difficulties to be more human-readable.
{
	AI_EASY = 0,
	AI_MEDIUM,
	AI_HARD
};

/// With this, we forward declare our AI, Game and Board classes, so we can write code using them before writing the
/// actual classes.
class CAI;
class CGame;
class CBoard;

namespace Game
{
	extern CAI* Fisherman;
	extern CGame* Self;
	extern CBoard* Board;
}

class CAI
{
private:
	int iDifficulty;
	void Predict(void);
	float Chance(void);
public:
	void Setup(int iDifficulty);
	void Think(void);
};

class CGame
{
private:
	char* szPlayerName;
	int iComputerDifficulty;
	int iMoves;
	clock_t clGameStartTime;
	char* GetPlayerName(void);
public:
	void Setup(void);
	void Run(void);
};

class CBoard
{
private:
	char szGameBoard[6][7];
	int CheckForWins(void);
public:
	void Setup(void);
	void Draw(void);
	void Update(void);
};