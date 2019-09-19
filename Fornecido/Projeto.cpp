#include "Projeto.h"

//Implemente os metodos!

Projeto::Projeto (string nome, int maximoAtividades) : nome (nome), maximoAtividades (maximoAtividades) {
    this->atividades = new Atividade*[maximoAtividades]; 
}

Projeto::~Projeto () {
    cout << "Projeto destruido" << endl;
}

int Projeto::getDuracao () {
    int soma = 0;
    
    for (int i=0; i < numAtividades; i++) {
        soma += this->atividades[i]->getDuracao();
    }
    return soma;
}

int Projeto::getQuantidade () {
    return numAtividades;
}

bool Projeto::adicionar (Atividade* a) {

    for (int j = 0; j < numAtividades; j++) {
        if (atividades[j] == a) {
            cout << "Atividades iguais!" << endl;
            return false;
        }
    }
    
    if (numAtividades < maximoAtividades) {
        atividades[numAtividades] = a;
        numAtividades++;
        return true;
    }
    return false;
}