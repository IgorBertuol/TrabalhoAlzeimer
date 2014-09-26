#include "Tratamento.h"

Tratamento::Tratamento(){
    setCodigo(0);
    setTratamento("");
}


Tratamento::Tratamento(int codigo,string tratamento){
    setCodigo(codigo);
    setTratamento(tratamento);
}

void Tratamento::setCodigo(int codigo){
    this->codigo = codigo;
}

void Tratamento::setTratamento(string tratamento){
    this->tratamento = tratamento;
}

int Tratamento::getCodigo(){
    return codigo;
}

string Tratamento::getTratamento(){
    return tratamento;
}
