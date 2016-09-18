#include "Aluno.h"
#include "Funcionario.h"

using namespace std;

class AlunoFuncionario: public Aluno, public Funcionario
{
public:
    float Desconto;
    void setNome(string n);
    string getNome();
    void setEndereco(string e);
    string getEndereco();
    void setDataNascimento(string d);
    string getDataNascimento();
    float getDesconto();
    void setDesconto(float d);
};
//Desambiguação:
void AlunoFuncionario::setNome(string n)
{
    Funcionario::setNome(n);
}

string AlunoFuncionario::getNome()
{
    return Funcionario::getNome();
}

void AlunoFuncionario::setEndereco(string e)
{
    Funcionario::setEndereco(e);
}

string AlunoFuncionario::getEndereco()
{
    return Funcionario::getEndereco();
}

void AlunoFuncionario::setDataNascimento(string d)
{
    Funcionario::setDataNascimento(d);
}

string AlunoFuncionario::getDataNascimento()
{
    return Funcionario::getDataNascimento();
}

//Final da Desambiguação

float AlunoFuncionario::getDesconto()
{
    return Desconto;
}

void AlunoFuncionario::setDesconto(float d)
{
    Desconto = d;
}
