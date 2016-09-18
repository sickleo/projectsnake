#ifndef _trap_H
#define _trap_H
#include "food.h"
using namespace std;

class Trap
{
private:
    int x,y;

public:
    Trap();
    int death();
    void mgotoxy();
};


#endif
