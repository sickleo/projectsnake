#ifndef _Game_H
#define _Game_H
#include <stdlib.h>
#include <iostream>

class Game
{
private: //As subclasses de Game est�o cientes dos atributos e metodos privados
    int win, vida/*,time=3min*/; //Variavel que conta se todas as comidas foram engolidas(jogador ganha) e variavel que conta se o tempo acabou(jogador perde)

  //int FoodXY[2][15]; //Vetor que salva as coordenadas dos 15 objetos comida.
  int f1=0,f2=0; //Contador que vai estar dentro da fun��o SaveCoordF para contar o n�mero da coluna de FoodXY em que a informa��o ir� ser depositada
  int t1=0,t2=0; //Contador que vai estar dentro da fun��o SaveCoordT para contar o n�mero da coluna de TrapXY em que a informa��o ir� ser depositada

public:
    Game();//Metodo construtor que vai criar o mapa.
    void Timer(); //Fun��o que pega a variavel tempo, printa na tela e decresce at� o jogo acabar.
    void EndGame(); //Fun��o que � chamada ap�s checagem das variaveis 'win' e 'vida' no main. Se a v�riavel
                   // "win" chegar a 15(numero de comidas), a fun��o "EndGame()" pausa a tela e mostra "You Win!",
                   //e se v�riavel "vida" chegar a 0 a fun��o pausa a tela e mostra "You Lose!"
    void setVida(int v);//Serve para setar a vida de Game de acordo com o hp da classe Life.
    void SaveCoordF(int q, int w); //Fun��o que vai passar cada coordenada para o vetor FoodXY
    void SaveCoordT (int r, int u); //Fun��o que vai passar cada coordenada para o vetor TrapXY
    int getFoodXY; //� assim que se cria um get de matriz?

    //ATRIBUTOS EST�O PUBLICO S� PARA TESTE:

      int FoodXY[2][15]; //Vetor que salva as coordenadas dos 15 objetos comida
      int TrapXY[2][10]; //Vetor que salva as coordenadas dos 10 objetos comida


};

#endif
