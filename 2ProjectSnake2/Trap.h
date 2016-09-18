#ifndef _Trap_H
#define _Trap_H
#include <windows.h>
using namespace std;

class Trap
{
private:
    int coordx,coordy,x,y; //Coordenadas x e y de cada obstaculo e o vetor que vai salva-las
public:
    Trap(); //Construtor que cria uma obstaculo
    int getTrapX(); //Mostra a coordenada armazenada em "coordx"
    int getTrapY(); //Mostra a coordenada armazenada em "coordy"
    void setTrapXY(int i,int j); //Passa os parametros aleatorios criados em rand() para as variaveis coordx e coordy
    void mgotoxy(int x,int y);
};



#endif // _Trap_H
