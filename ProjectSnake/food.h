#ifndef _food_H
#define _food_H
using namespace std;

class Food
{
private:
    int x, y;

public:
    Food(); //M�todo construtor que vai gerar as comidas
    int life(); //Fun��o que acrescenta vidas
    void mgotoxy();
};




#endif
