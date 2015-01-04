#pragma once
#include "consoleManip.h"
class game
{
	int magic; /* magic number */
	int guess; /* user's guess */
	consoleManip cos;
	int userGuess ( );
	int result ( int g , int m );
public:
	void start ( );
	game ( );
	~game ( );
};

