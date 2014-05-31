#include <iostream>

using namespace std;
int guesst()
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
	
	magic = rand(); /* generate the magic number */
	
	for (guess = guesst();guess!=result(guess, magic);guess = guesst());
	
	cout << "correct answer" << endl;
	return 0;


}