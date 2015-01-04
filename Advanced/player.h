#pragma once
#include <string>
#include "consoleManip.h"
using std::string;

class player
{
private:
	consoleManip cos;
	string playerName;
	int score;
public:
	void setPlayerName();
	string getPlayerName ( );
	player ( );
	~player ( );
};

