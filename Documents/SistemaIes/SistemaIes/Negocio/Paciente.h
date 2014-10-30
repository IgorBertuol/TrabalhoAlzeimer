#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
#include "Tratamento.h"

using namespace std;

class Paciente{
public:
    Paciente();
    Paciente(string nome,int idade,string continente,string sexo,string historico,Tratamento *tratamento);

    void setNome(string nome);
    void setIdade(int idade);
    void setContinente(string continente);
    void setSexo(string sexo);
    void setHistorico(string historico);
    void setTratamento(Tratamento tratamento);

    string getNome();
    int getIdade();
    string getContinente();
    string getSexo();
    string getHistorico();
    Tratamento getTratamento();


private:
    string nome;
    int idade;
    string continente;
    string sexo;
    string historico;
    Tratamento tratamento;
};

#endif // PACIENTE_H
