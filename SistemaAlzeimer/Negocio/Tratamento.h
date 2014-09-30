#ifndef TRATAMENTO_H
#define TRATAMENTO_H

#include <iostream>
#include <string>

using namespace std;

class Tratamento{
public:
    Tratamento();
    Tratamento(int codigo,string nome);
    void setCodigo(int codigo);
    void setNome(string nome);

    int getCodigo();
    string getNome();

private:
    int codigo;
    string nome;
};

#endif // TRATAMENTO_H
