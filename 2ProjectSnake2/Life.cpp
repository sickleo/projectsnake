#include "Life.h"
#include <windows.h>
using namespace std;


Life::Life() //Aqui é dado o número de vidas iniciais e impresso os corações correspondentes na tela
{   int i=0;
    hp=5;
    mgotoxy(0,31);
    cout << "Lifes:";
      for(i=0;i<hp;i++)
        {
            cout <<char (3);
        };
}


void Life::GanhaHP() //Aqui há incremento de vida e ajuste dos corações na tela
{
    hp++;
        mgotoxy(0,31);
    cout << "Lifes:";
      for(int i=0;i<hp;i++)
        {
            cout <<char (3);
        };
}

void Life::PerdeHP() //Aqui há decremento de vida e ajuste dos corações na tela
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
