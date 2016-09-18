#include "Funcionario.h"
#include <iostream>

Funcionario::Funcionario()
{
    cout << "\nExecutando construtor da classe Funcionario\n";
}

float Funcionario::getSalario()
{
    return salario;
}

void Funcionario::setSalario(float s)
{
    salario = s;
}

string Funcionario::getCargo()
{
    return cargo;
}

void Funcionario::setCargo(string c)
{
    cargo = c;
}
