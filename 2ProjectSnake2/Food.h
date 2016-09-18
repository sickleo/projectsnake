#ifndef _Food_H
#define _Food_H
#include <windows.h>
using namespace std;

class Food
{
private:
    int coordx,coordy,x,y; //Coordenadas x e y de cada comida e o vetor que vai salva-las
public:
    Food(); //Construtor que cria uma comida
    int getFoodX(); //Mostra a coordenada armazenada em "coordx"
    int getFoodY(); //Mostra a coordenada armazenada em "coordy"
    void setFoodXY(int i,int j); //Passa os parametros aleatorios criados em rand() para as variaveis coordx e coordy
    void mgotoxy(int x,int y);
};



#endif // _Food_H
