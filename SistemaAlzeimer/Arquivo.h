#include <fstream>
#include "Paciente.h"
#include "Lista.h"
//#include "Tratamento.h"
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
