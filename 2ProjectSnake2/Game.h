#ifndef _Game_H
#define _Game_H
#include <stdlib.h>
#include <iostream>

class Game
{
private: //As subclasses de Game estão cientes dos atributos e metodos privados
    int win, vida/*,time=3min*/; //Variavel que conta se todas as comidas foram engolidas(jogador ganha) e variavel que conta se o tempo acabou(jogador perde)

  //int FoodXY[2][15]; //Vetor que salva as coordenadas dos 15 objetos comida.
  int f1=0,f2=0; //Contador que vai estar dentro da função SaveCoordF para contar o número da coluna de FoodXY em que a informação irá ser depositada
  int t1=0,t2=0; //Contador que vai estar dentro da função SaveCoordT para contar o número da coluna de TrapXY em que a informação irá ser depositada

public:
    Game();//Metodo construtor que vai criar o mapa.
    void Timer(); //Função que pega a variavel tempo, printa na tela e decresce até o jogo acabar.
    void EndGame(); //Função que é chamada após checagem das variaveis 'win' e 'vida' no main. Se a váriavel
                   // "win" chegar a 15(numero de comidas), a função "EndGame()" pausa a tela e mostra "You Win!",
                   //e se váriavel "vida" chegar a 0 a função pausa a tela e mostra "You Lose!"
    void setVida(int v);//Serve para setar a vida de Game de acordo com o hp da classe Life.
    void SaveCoordF(int q, int w); //Função que vai passar cada coordenada para o vetor FoodXY
    void SaveCoordT (int r, int u); //Função que vai passar cada coordenada para o vetor TrapXY
    int getFoodXY; //É assim que se cria um get de matriz?

    //ATRIBUTOS ESTÃO PUBLICO SÓ PARA TESTE:

      int FoodXY[2][15]; //Vetor que salva as coordenadas dos 15 objetos comida
      int TrapXY[2][10]; //Vetor que salva as coordenadas dos 10 objetos comida


};

#endif
