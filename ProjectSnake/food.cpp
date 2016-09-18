#include "food.h"
#include "game.h"
#include <iostream>
#include <windows.h>
using namespace std;


Food::Food()
{
        x = rand() % 80 + 2;
        y = rand() % 30 + 2;
        mgotoxy();
        cout << (char) 248;
}

void Food::mgotoxy()
{	COORD xy={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}
