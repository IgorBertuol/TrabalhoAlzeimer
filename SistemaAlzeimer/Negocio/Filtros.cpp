#include "Filtros.h"


void Filtro::imprimeItem(Paciente *paciente){
    cout << "Paciente: " << paciente->getNome() << endl;
    cout << "Idade: "<< paciente->getIdade() << endl;
    cout << "Continente: "<< paciente->getContinente() << endl;
    cout << "Sexo: "<< paciente->getSexo() << endl;
    cout << "Historico: "<< paciente->getHistorico() << endl;
    cout << "Tratamento: "<< paciente->getTratamento().getNome() << endl;
}


void Filtro::filtroDados(ListaPaciente* lista){
    int cont = 0;
    string continente,sexo,historico,maiorMenor;
    int idade;
    cout << "Qual o continente desejado para filtrar ?(america,asia,africa,europa,oceania)" << endl;
    cin >> continente;
    cin >> idade;
    cin >> maiorMenor;
    cin >> sexo;
    cin >> historico;
    lista->atual = lista->primeiro;
    while(lista->atual != NULL){
        if(continente == lista->atual->item->getContinente()){
            if(sexo == lista->atual->item->getSexo()){
                if(historico == lista->atual->item->getHistorico()){
                    if(maiorMenor == "menor"){
                        if( lista->atual->item->getIdade() < idade){
                            imprimeItem(lista->atual->item);
                        }
                    }else{
                        if(lista->atual->item->getIdade() > idade){
                            imprimeItem(lista->atual->item);
                        }
                    }
                }
            }
        }
        lista->atual = lista->atual->proximo;
    }

}
