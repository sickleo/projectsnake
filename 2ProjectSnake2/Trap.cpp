#include "Trap.h"
#include <windows.h>
#include <iostream>
using namespace std;

Trap::Trap() //Lembrar de pesquisar sobre como causar aleatoriedade toda vez que o programa é aberto
{
        x = rand() % 69 + 2;
        y = rand() % 28 + 2;
    /*for(int c=0;c<15;c++) //COMO FAZER A CHECAGEM?
    {
        if(SNAKE.FoodXY[0][c]==x&&SNAKE.FoodXY[1][c]==y)
        x = rand() % 69 + 2;
        y = rand() % 28 + 2;
        else
            break;
    }
       mgotoxy(x,y);
       cout << (char) 248;
       setTrapXY(x,y);
    */
}

void Trap::setTrapXY(int i,int j)
{
    coordx = i;
    coordy = j;

}

int Trap::getTrapX()
{
    return coordx;
}

int Trap::getTrapY()
{
    return coordy;
}

void Trap::mgotoxy(int x,int y)
{	COORD xy={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}

