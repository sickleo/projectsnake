#ifndef _Life_H
#define _Life_H
#include <stdlib.h>
#include <iostream>
#include <windows.h>

#include "Food.h"
#include "Trap.h"


using namespace std;
//As FOODs e TRAPs são caminhos de se GANHAR ou PERDER >LIFE<.

class Life
{
private:
    int hp; //Numero de vidas
//    Food f[15]; //Aqui são criados 15 objetos comida.
//    Trap t[10]; //Aqui são criados 10 objetos obstaculos.
public:
    Life(); //Metodo construtor que vai printar o numero de vidas iniciais na tela e criar as comidas e os obstaculos
    void GanhaHP();//Incrementa a variavel hp e aumenta o numero de corações printados na tela
    void PerdeHP();//Decrementa a variavel ho e diminui o numero de corações printados na tela
    void mgotoxy(int x,int y);//Função que move o cursor
    int getHp();//Pega o valor atual do hp na classe Life para mandar para uma checagem na classe Game
};

#endif
