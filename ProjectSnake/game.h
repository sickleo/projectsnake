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
    void setLife (int c); //função setter para acrescimo e decrescimo de vidas
    int getLife();


private:
     int hp=5;
    //float ou int time; criando o tempo de duração do jogo: TEMPO É INT OU FLOAT?
    //char start = rand() % 4; //direção inicial do jogo feita por um nº aleatorio de 0 a 3 (cada seta do teclado é um nº)
    //talvez seja necesasrio usar o "srand (time(NULL));" pra gerar o nº aleatorio, mas ainda não sei pq.

};

#endif // _game_H
