#include "Food.h"
#include <windows.h>
#include <iostream>
using namespace std;

Food::Food() //Lembrar de pesquisar sobre como causar aleatoriedade toda vez que o programa é aberto
{
        x = rand() % 69 + 2;
        y = rand() % 28 + 2;
        mgotoxy(x,y); //Aqui a função mgotoxy é ativada com parametros x e y aleatorios
        cout << (char) 248;
        setFoodXY(x,y);
}

void Food::setFoodXY(int i,int j)
{
    coordx = i;
    coordy = j;

}

int Food::getFoodX()
{
    return coordx;
}

int Food::getFoodY()
{
    return coordy;
}

void Food::mgotoxy(int x,int y)
{	COORD xy={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}
