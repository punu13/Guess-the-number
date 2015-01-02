#include <iostream>
#include "player.h"
using namespace std;
int userGuess()
{
	int refG;
	cout << "guess the number" << endl;
	cin >> refG;
	return refG;
}
int result(int g, int m)
{
	if (g > m) cout << "Too high" << endl;
	if (g < m) cout << "Too low" << endl;
	return m ;
}
int main(void)
{
	int magic; /* magic number */
	int guess; /* user's guess */

	player player1;
	player1.setPlayerName ( );
	
	magic = rand(); /* generate the magic number */
	
	for ( guess = userGuess ( ); guess != result ( guess , magic ); guess = userGuess ( ) );
	
	cout << "correct answer" << endl;
	return 0;


}