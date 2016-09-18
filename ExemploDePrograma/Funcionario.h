#ifndef _Funcionario_H
#define _Funcionario_H

#include "Pessoa.h"
#include <string>

using namespace std;

class Funcionario: public Pessoa
{
private:
    float salario;
    string cargo;
public:
    Funcionario();
    float getSalario();
    void setSalario(float s);
    string getCargo();
    void setCargo(string c);
};
#endif
