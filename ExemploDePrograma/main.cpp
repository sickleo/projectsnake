#include "Pessoa.h"
#include "Aluno.h"
#include "Funcionario.h"
#include "AlunoFuncionario.h"
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Iniciando o processo de criação de objeto Pessoa\n";
    Pessoa p;

    cout << "Iniciando o processo de criação de objeto Aluno\n";
    Aluno a;

    cout << "Iniciando o processo de criação de objeto Funcionario\n";
    Funcionario f;

    cout << "Iniciando o processo de criação de objeto Alun Funcionário";
    AlunoFuncionario af;

    p.setNome("Vanderlei");
    p.setEndereco("Rua 15 de novembro, 345");
    p.setDataNascimento("12/05/1960");

    a.setNome("Maria");
    a.setEndereco("Rua 26 de agosto, 1874");
    a.setDataNascimento("31/01/1990");
    a.setCurso("Ciência da Computação");
    a.setSemestre("4º");

    f.setNome("Pedro");
    f.setEndereco("Rua 7 de setembro, 3875");
    f.setDataNascimento("27/10/1980");
    f.setCargo("Arquiteto de software");
    f.setSalario(10000);

    af.setNome("Bernardo");
    af.setEndereco("Rua 04 de abril, 444");
    af.setDataNascimento("13/08/1993");
    af.setCurso("Engenharia Eletrica");
    af.setSemestre("7º");
    af.setCargo("Estagiario");
    af.setSalario(1100);
    af.setDesconto(25.0);

    cout << "\n\nDados cadastrados no objeto p - do tipo Pessoa";
    cout << "\nNome: " << p.getNome();
    cout << "\nEndereço: " << p.getEndereco();
    cout << "\nData de nascimento: " << p.getDataNascimento();

    cout << "\n\nDados cadastrados no objeto a - do tipo Aluno";
    cout << "\nNome: " << a.getNome();
    cout << "\nEndereço " << a.getEndereco();
    cout << "\nData de nascimento: " << a.getDataNascimento();
    cout << "\nCurso: " << a.getCurso();
    cout << "\nSemestre: " << a.getSemestre();

    cout << "\n\nDados cadastrados no objeto f - do tipo funcionario";
    cout << "\nNome: " << f.getNome();
    cout << "\nEndereço: " << f.getEndereco();
    cout << "\nData de nascimento: " << f.getDataNascimento();
    cout << "\nCargo: " << f.getCargo();
    cout << "\nSalário: R$ " <<f.getSalario();

    cout << "\n\nDados cadastrados no objeto af - do tipo Aluno Funcionario";
    cout << "\nNome: " << af.getNome();
    cout << "\nEndereço " << af.getEndereco();
    cout << "\nData de nascimento: " << af.getDataNascimento();
    cout << "\nCurso: " << af.getCurso();
    cout << "\nSemestre: " << af.getSemestre();
    cout << "\nCargo: " << af.getCargo();
    cout << "\nSalário: R$ " << af.getSalario();
    cout << "\n Desconto: " << af.getDesconto() << "%" ;

    return 0;

}
