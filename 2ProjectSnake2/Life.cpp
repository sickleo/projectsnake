#include "Life.h"
#include <windows.h>
using namespace std;


Life::Life() //Aqui � dado o n�mero de vidas iniciais e impresso os cora��es correspondentes na tela
{   int i=0;
    hp=5;
    mgotoxy(0,31);
    cout << "Lifes:";
      for(i=0;i<hp;i++)
        {
            cout <<char (3);
        };
}


void Life::GanhaHP() //Aqui h� incremento de vida e ajuste dos cora��es na tela
{
    hp++;
        mgotoxy(0,31);
    cout << "Lifes:";
      for(int i=0;i<hp;i++)
        {
            cout <<char (3);
        };
}

void Life::PerdeHP() //Aqui h� decremento de vida e ajuste dos cora��es na tela
{
    hp--;
        mgotoxy(0,31);
    cout << "Lifes:";
      for(int i=0;i<hp;i++)
        {
            cout <<char (3);
        };
}



void Life::mgotoxy(int x,int y)
{	COORD xy={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}
