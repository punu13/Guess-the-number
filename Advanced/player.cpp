#include "player.h"
#include <iostream>
#include "consoleManip.h"
using namespace std;
void player::setPlayerName ( )
{
	consoleManip cos;
	cos.myCout ( "Please enter a player name" );
	playerName = cos.myCin ( );
	
}


player::player ( )
{
}


player::~player ( )
{
}
