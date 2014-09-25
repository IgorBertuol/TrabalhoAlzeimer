#include "Paciente.h"

#ifndef LISTA_H
#define LISTA_H

class Lista{
public:
    typedef struct No{
        Paciente* item;
        No* proximo;
    }* Apontador;

    Apontador primeiro;
    Apontador atual;
    Apontador temp;

public:
    Lista();
    void inserir(Paciente* paciente);
    void deletar(string nome);
    int alterar(string nome);
    void imprimir();
    void consultar(string nome);
};

#endif // LISTA_H
