#ifndef _Pessoa_H
#define _Pessoa_H

#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    string endereco;
    string dataNascimento;
public:
    Pessoa();
    string getNome();
    void setNome(string n);
    string getEndereco();
    void setEndereco(string e);
    string getDataNascimento();
    void setDataNascimento(string d);
};
#endif
