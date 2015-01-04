#include "game.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int  game::userGuess ( )
{
	int refG;
	cos.myCout ( "guess the number" );
	cos.SetColor ( FOREGROUND_RED | FOREGROUND_INTENSITY );
	cin >> refG;
	return refG;
}
int  game::result ( int g , int m )
{
	if ( g > m )
	{
		cout << "Too high" << endl;
	}
	if ( g < m )
	{
		cout << "Too low" << endl;
	}
	return m;
}
void game::start ( )
{
	magic = rand ( ); /* generate the magic number */

	for ( guess = userGuess ( ); guess != result ( guess , magic ); guess = userGuess ( ) );

	cos.myCout( "correct answer" );
}
game::game ( )
{
}


game::~game ( )
{
}
