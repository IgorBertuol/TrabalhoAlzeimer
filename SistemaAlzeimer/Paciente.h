#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>

using namespace std;

class Paciente{
public:
    Paciente();
    Paciente(string nome,int idade,string continente,string sexo,string historico,string tratamento);

    void setNome(string nome);
    void setIdade(int idade);
    void setContinente(string continente);
    void setSexo(string sexo);
    void setHistorico(string historico);
    void setTratamento(string tratamento);

    string getNome();
    int getIdade();
    string getContinente();
    string getSexo();
    string getHistorico();
    string getTratamento();


private:
    string nome;
    int idade;
    string continente;
    string sexo;
    string historico;
    string tratamento;
};

#endif // PACIENTE_H
