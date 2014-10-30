#ifndef FILTROS_H
#define FILTROS_H


#include <iostream>
#include <string>
#include "Negocio/ListaPaciente.h"
#include "Negocio/Paciente.h"

using namespace std;

class Filtro{
public:
    void filtroDados(ListaPaciente*);
    void imprimeItem(Paciente*);
};

#endif // FILTROS_H
