#include <fstream>
#include "Negocio/Paciente.h"
#include "Negocio/Lista.h"
#include "Negocio/Tratamento.h"
#include <cstdlib>

#ifndef ARQUIVO_H
#define ARQUIVO_H

class Arquivo{
public:
    fstream arquivo;
    void escreverArquivo(Lista*);
    Lista *lerArquivo();
};

#endif // ARQUIVO_H
