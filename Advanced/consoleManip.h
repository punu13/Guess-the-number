#pragma once
#include <Windows.h>
#include <string>

using std::string;
class consoleManip
{
	HANDLE hcon;
	
public:
	void SetColor ( unsigned short color );
	void myCout ( string str );
	string myCin (  );
	consoleManip ( );
	~consoleManip ( );
};
