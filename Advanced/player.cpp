#include "player.h"
#include <iostream>

using namespace std;
void player::setPlayerName ( )
{
	
	cos.DisplayString ( "Please enter a player name" );
	playerName = cos.myCin ( );
	
}
string player::getPlayerName ( )
{
	cos.SetColor ( 3 );
	return playerName;
}

player::player ( )
{
}


player::~player ( )
{
}
