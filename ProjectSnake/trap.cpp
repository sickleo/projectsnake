#include "trap.h"
#include <iostream>
#include <windows.h>
using namespace std;


Trap::Trap()
{
    x = rand() % 80 + 2;
    y = rand() % 30 + 2;
    mgotoxy();
    cout << (char) 15;
}

void Trap::mgotoxy()
{	COORD xy={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}
