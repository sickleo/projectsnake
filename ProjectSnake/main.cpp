#include <iostream>
#include <stdlib.h>
#include "game.h"
#include <windows.h>
using namespace std;
//srand(time(null));
//criar vetor para armazenar numeros aleatorios e n�o criar trap em cima de food

//c�digo cria sempre os mesmos numeros aleatorios

int main()
{
    Game g;
    int i;
    cout << "Lifes:";
    for(i=0;i<g.getLife();i++)
        {
            cout << char (3);
        };
}
