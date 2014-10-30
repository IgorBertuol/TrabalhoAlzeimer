#include "Paciente.h"

#ifndef LISTAPACIENTE_H
#define LISTAPACIENTE_H

class ListaPaciente{
public:
    typedef struct No{
        Paciente* item;
        No* proximo;
    }* Apontador;

    Apontador primeiro;
    Apontador atual;
    Apontador temp;

public:
    ListaPaciente();
    void inserir(Paciente* paciente);
    void deletar(string nome);
    float contador();
    int alterar(string nome,Paciente *);
    void imprimir();
    void consultar(string nome);
};

#endif // LISTAPACIENTE_H
