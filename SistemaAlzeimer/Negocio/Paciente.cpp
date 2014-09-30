#include "Paciente.h"

//Construtor

Paciente::Paciente(){
    setNome("");
    setIdade(0);
    setContinente("");
    setSexo("");
    setHistorico("");
}


Paciente::Paciente(string nome, int idade, string continente, string sexo, string historico,Tratamento tratamento){
    setNome(nome);
    setIdade(idade);
    setContinente(continente);
    setSexo(sexo);
    setHistorico(historico);
    setTratamento(tratamento);
}


//Encapsulamentos

void Paciente::setNome(string nome){
    this->nome = nome;
}

void Paciente::setIdade(int idade){
    this->idade = idade;
}

void Paciente::setContinente(string continente){
    this->continente = continente;
}

void Paciente::setSexo(string sexo){
    this->sexo = sexo;
}

void Paciente::setHistorico(string historico){
    this->historico = historico;
}

void Paciente::setTratamento(Tratamento tratamento){
    this->tratamento = tratamento;
}


string Paciente::getNome(){
    return nome;
}

int Paciente::getIdade(){
    return idade;
}

string Paciente::getContinente(){
    return continente;
}

string Paciente::getSexo(){
    return sexo;
}

string Paciente::getHistorico(){
    return historico;
}

Tratamento Paciente::getTratamento(){
    return tratamento;
}





