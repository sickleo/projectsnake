#include <iostream>
#include "Game.h"
#include "Life.h"
using namespace std;

int main()
{
    Game SNAKE;
    Life l;
    Food f[15]; //Criar comida e obstaculo no Main ou em alguma classe?
    Trap t[10];
    for(int h=0;h<15;h++) //Salvar coordenada X e Y de food no vetor FoodXY pela função SaveCoordF
    {
        SNAKE.SaveCoordF(f[h].getFoodX(),f[h].getFoodY());
    }

        for(int g=0;g<15;g++) //Salvar coordenada X e Y de trap no vetor TrapXY pela função SaveCoordT
    {
        SNAKE.SaveCoordT(t[g].getTrapX(),t[g].getTrapY());
    }
     /*
    getSnakeXY(); //Pega coordenadas da cobra
    getFoodXY(); //Pega coordenadas das comidas
    getTrapXY(); //PEga coordenadas das armadilhas

    if(SnakeXY==FoodXY) //Se a cobra tiver passado por uma comida:
        hp++; //acrescenta o numero de vidas mostradas na tela
        win++; //o jogador fica mais proximo de vencer o jogo
    if(SnakeXY==TrapXY) //Se a cobra tiver passado por uma armadilha:
        hp--; //descresce o numero de vidas do jogador mostradas na tela

    l.getHp()= x; //Função coloca o valor do hp de "Life" em uma variavel auxiliar x.
    SNAKE.setVida(x); //Função ajusta a variavel Vida de "Game" para o valor de x.

    if(win==15||vida==0||time==0) //O jogo acaba quando: Acabam as comidas, acabam as vidas ou acaba o tempo.
    EndGame();
  */
}















        /*//Teste 1 para ver se as coordenadas estão sendo salvas
        l.mgotoxy(0,35);
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<15;j++)
            {
                cout << SNAKE.FoodXY[i][j] << "\n";
            }
        }
        */

          /*teste 2:
    l.mgotoxy(0,35);
    for(int j=0;j<15;j++)
            {
                cout << f[j].getFoodX() << "\n";
            }

   cout << "\n";
    for(int i=0;i<15;i++)
            {
                cout << f[i].getFoodY() << "\n";
            }
            */
