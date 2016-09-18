#include "game.h"
#include <windows.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


void mgotoxy(int x,int y)
{	COORD xy={x,y};  //o que é esse warning nessa linha?
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}

Game::Game() //Metodo construtor que cria o mapa
{
    int i;
    for(i=0;i<80;i++)
    {
        mgotoxy(i,1);
        cout << char (176);
    }
    for(i=1;i<30;i++)
    {
        mgotoxy(0,i);
        cout << char (176);
    }
    for(i=2;i<31;i++)
    {
        mgotoxy(79,i);
        cout << char (176);
    }
    for(i=0;i<80;i++)
    {
        mgotoxy(i,30);
        cout << char (176);
    }
}

void Game::setLife(int l)
{
    hp = l;
}

int Game::getLife()
{
    return hp;
}

