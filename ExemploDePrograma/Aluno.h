#ifndef _Aluno_H
#define _Aluno_H

#include "Pessoa.h"
#include <string>
using namespace std;

class Aluno: public Pessoa
{
private:
    string curso;
    string semestre;
public:
    Aluno();
    string getCurso();
    void setCurso(string c);
    string getSemestre();
    void setSemestre(string s);
};
#endif
