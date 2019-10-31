#include "Projeto.h"
#include <stdexcept>

Projeto::Projeto(string nome) : nome(nome) {
    this->atividades = new vector<Atividade*>();
    this->pessoas = new list<Pessoa*>();
}

Projeto::~Projeto() {
    for (unsigned int i = 0; i < this->atividades->size(); i++) {
        delete (*atividades)[i];
    }
    delete[] atividades;
    delete[] pessoas;
}

int Projeto::getDuracao() {
    int duracao = 0;
    for (unsigned int i = 0; i < this->atividades->size(); i++) {
        duracao += (*atividades)[i]->getDuracao();
    }
    return duracao;
}

vector<Atividade*>* Projeto::getAtividades() {
    return this->atividades;
}

void Projeto::adicionar(Atividade* a) {
    // Atividade ja previamente adicionada
    for (unsigned int i = 0; i < this->atividades->size(); i++) {
        if ((*atividades)[i] == a)
            throw new invalid_argument("Atividade ja adicionada");
    }

    // Pode ser adicionada
    this->atividades->push_back(a);
}

list<Pessoa*>* Projeto::getPessoas() {
    return this->pessoas;
}

void Projeto::adicionar(Pessoa* p) {
    // Pessoa ja previamente adicionada
    list<Pessoa*>::iterator it = find (pessoas->begin(), pessoas->end(), p);

    if (it != pessoas->end())
        throw new invalid_argument ("Pessoa ja adicionada.");

    // Pode ser adicionada
    this->pessoas->push_back (p);
}
