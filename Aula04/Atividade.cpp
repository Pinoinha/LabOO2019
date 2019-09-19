/*
 * Faca os includes e implemente os seus metodos aqui!
 */

#include <iostream>
#include <cmath>
#define NUMERO_MAXIMO_VALORES 10
#include "Atividade.h"
#include "Pessoa.h"

using namespace std;

void Atividade::setNome(string nome) {
    this->nome = nome;
}

void Atividade::setHorasNecessarias(int horasNecessarias) {
    this->horasNecessarias = horasNecessarias;
}

int Atividade::getHorasNecessarias() {
    return this->horasNecessarias;
}

int Atividade::getQuantidade() {
    return this->numPessoas;
}

bool Atividade::adicionar(Pessoa* p) {
    if (!p->isDisponivel() || this->getQuantidade() == NUMERO_MAXIMO_VALORES) {
        return false;
    }

    else {
        this->pessoas[this->numPessoas] = p;
        this->numPessoas++;
        p->setDisponivel(false);
        return true;
    }
}

int Atividade::getDuracao() {
    int somaHoras = 0;

    if (this->getQuantidade() > 0) {
        for(int i = 0; i < this->getQuantidade(); i++) {
            somaHoras += this->pessoas[i]->getHorasDiarias();
        }
    }

    else {
        return -1;
    }

    return ceil(this->horasNecessarias / somaHoras);
}

void Atividade::imprimir() {
    cout << this->nome << " - " << this->getDuracao() << " dias estimados" << endl;
    if (this->getQuantidade() > 0) {
        for(int j = 0; j < this->getQuantidade(); j++) {
                this->pessoas[j]->imprimir();
        }
    }
}
