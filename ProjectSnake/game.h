#ifndef _game_H
#define _game_H
#include <stdlib.h>
#include <iostream>
#include "food.h"
#include "trap.h"

using namespace std;

class Game
{
private:
    Food f[15];
    Trap t[10];

public:
    Game(); //Metodo criador que vai gerar o mapa
    //~Game(); //Metodo destrutor que vai dar o Game Over
    void setLife (int c); //fun��o setter para acrescimo e decrescimo de vidas
    int getLife();


private:
     int hp=5;
    //float ou int time; criando o tempo de dura��o do jogo: TEMPO � INT OU FLOAT?
    //char start = rand() % 4; //dire��o inicial do jogo feita por um n� aleatorio de 0 a 3 (cada seta do teclado � um n�)
    //talvez seja necesasrio usar o "srand (time(NULL));" pra gerar o n� aleatorio, mas ainda n�o sei pq.

};

#endif // _game_H
