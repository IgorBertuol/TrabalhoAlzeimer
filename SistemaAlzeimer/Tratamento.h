#ifndef TRATAMENTO_H
#define TRATAMENTO_H

#include <iostream>
#include <string>

using namespace std;

class Tratamento{
public:
    Tratamento();
    Tratamento(int codigo,string tratamento);
    void setCodigo(int codigo);
    void setTratamento(string tratamento);

    int getCodigo();
    string getTratamento();

private:
    int codigo;
    string tratamento;
};

#endif // TRATAMENTO_H
