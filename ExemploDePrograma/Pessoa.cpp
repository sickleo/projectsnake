#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa()
{
   cout << "\nExecutando construtor da classe Pessoa\n";
}

string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setNome(string n)
{
    nome = n;
}

string Pessoa::getEndereco()
{
    return endereco;
}

void Pessoa::setEndereco(string e)
{
    endereco = e;
}

string Pessoa::getDataNascimento()
{
    return dataNascimento;
}

void Pessoa::setDataNascimento(string d)
{
    dataNascimento = d;
}
