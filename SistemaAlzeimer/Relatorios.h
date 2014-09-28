#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <iostream>
#include <string>
#include "Paciente.h"
#include "Lista.h"

using namespace std;

class Relatorios{
public:
    void RelatorioSexo(Lista *lista,int cont);
    void RelatorioContinente(Lista *lista);
    void RelatorioXY(Lista *lista);
};


#endif // RELATORIOS_H
