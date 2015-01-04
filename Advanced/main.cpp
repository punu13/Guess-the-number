#include <iostream>
#include "player.h"
#include "game.h"
using namespace std;

int main(void)
{
	player player1;
	player1.setPlayerName ( );
	
	game myGame;
	myGame.start ( );

	cout << player1.getPlayerName ( ) << " Wins" << endl;
	return 0;

}