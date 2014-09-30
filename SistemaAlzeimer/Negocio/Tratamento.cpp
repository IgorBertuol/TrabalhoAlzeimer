#include "Tratamento.h"

Tratamento::Tratamento(){
    setCodigo(0);
    setNome("");
}


Tratamento::Tratamento(int codigo, string nome){
    setCodigo(codigo);
    setNome(nome);
}

void Tratamento::setCodigo(int codigo){
    this->codigo = codigo;
}

void Tratamento::setNome(string nome){
    this->nome = nome;
}

int Tratamento::getCodigo(){
    return codigo;
}

string Tratamento::getNome(){
    return nome;
}
