#ifndef LISTATRATAMENTO_H
#define LISTATRATAMENTO_H

#include "Tratamento.h"

class ListaTratamento{
public:
    typedef struct No{
        Tratamento* item;
        No* proximo;
    }* Apontador;

    Apontador primeiro;
    Apontador atual;
    Apontador temp;

public:
    ListaTratamento();
    void inserirTratamento(Tratamento *tratamento);
    void imprimirTratamento();
    void deletarTratamento(string nomeTratamento);
    int verificarTratamento(string nomeTratamento);
    void consultarTratamento(string nomeTratamento);
};



#endif // LISTATRATAMENTO_H
