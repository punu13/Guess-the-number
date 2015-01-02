#pragma once
#include <string>
using std::string;
class player
{
private:
	string playerName;
	int score;
public:
	void setPlayerName();
	string getPlayerName ( );
	player ( );
	~player ( );
};

