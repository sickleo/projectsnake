#ifndef _food_H
#define _food_H
using namespace std;

class Food
{
private:
    int x, y;

public:
    Food(); //Método construtor que vai gerar as comidas
    int life(); //Função que acrescenta vidas
    void mgotoxy();
};




#endif
