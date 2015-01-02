#include "consoleManip.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

consoleManip::consoleManip ( )
{
	hcon = GetStdHandle ( STD_OUTPUT_HANDLE ); //A handle to the console screen buffer.
}

void consoleManip::SetColor ( unsigned short color )
{
	SetConsoleTextAttribute ( hcon , color ); 
}

void consoleManip::myCout ( string Str )
{
	SetColor ( 10 );
	cout << Str << endl;
}
string consoleManip::myCin ()
{
	SetColor ( FOREGROUND_RED | FOREGROUND_INTENSITY);
	string Str;
	cin >> Str;
	return Str;
}

consoleManip::~consoleManip ( )
{
}
