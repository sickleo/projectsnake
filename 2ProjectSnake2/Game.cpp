#include "Game.h"
#include <windows.h>
using namespace std;

void mgotoxy(int x,int y)
{	COORD xy={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}

Game::Game() //Metodo construtor que cria o mapa
{
    int i;
    for(i=0;i<70;i++)
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
        mgotoxy(69,i);
        cout << char (176);
    }
    for(i=0;i<70;i++)
    {
        mgotoxy(i,30);
        cout << char (176);
    }
}

void Game::EndGame()
{
    Sleep(300);
    system("cls");
    if(win==15) //Checagem do numero de comidas
    cout << "You Win!";
    if(vida==0/*||time==0*/) //Checagem do hp e do tempo
    cout << "You Lose!";

}

void Game::Timer()
{
    //FUNÇÃO QUE CONTA O TEMPO E PRINTA NA TELA
}

void Game::setVida(int v)
{
    vida = v;
}

void Game::SaveCoordF(int q, int w)
{

                FoodXY[0][f1]= q;
                FoodXY[1][f2]= w;
    f1++;
    f2++;

}

void Game::SaveCoordT(int r, int u)
{

                TrapXY[0][t1]= r;
                TrapXY[1][t2]= u;
    t1++;
    t2++;

}
