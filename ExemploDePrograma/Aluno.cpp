#include "Aluno.h"
#include <iostream>
using namespace std;

Aluno::Aluno()
{
    cout << "\nExecutado construtor da classe Aluno\n";
}

string Aluno::getCurso()
{
    return curso;
}

void Aluno::setCurso(string c)
{
    curso = c;
}

string Aluno::getSemestre()
{
    return semestre;
}

void Aluno::setSemestre(string s)
{
    semestre = s;
}
