#include "Projeto.h"
#include "AtividadeComSupervisor.h"

Projeto::Projeto(string nome, int maximoValor) : nome(nome), maximoValor(maximoValor) {
    this->quantidadeAtividades = 0;
    this->quantidadePessoas = 0;
    atividades = new Atividade*[maximoValor];
    atividadesSemSupervisor = new Atividade*[maximoValor];
    pessoasAdicionadas = new Pessoa*[maximoValor];
}

Projeto::~Projeto() {
    for (int i = 0; i < quantidadeAtividades; i++) {
        delete atividades[i];
    }

    for (int j = 0; j < quantidadePessoas; j++) {
        delete pessoasAdicionadas[j];
    }

    delete[] atividades;
    delete[] pessoasAdicionadas;
}

int Projeto::getDuracao() {
    int duracao = 0;
    for (int i = 0; i < quantidadeAtividades; i++) {
        duracao += atividades[i]->getDuracao();
    }
    return duracao;
}

int Projeto::getQuantidadeAtividades() {
    return this->quantidadeAtividades;
}

Atividade** Projeto::getAtividades() {
    return this->atividades;
}

bool Projeto::adicionar(Atividade* a) {
    // Limite de atividades atingido
    if (quantidadeAtividades >= maximoValor)
        return false;

    // Atividade ja previamente adicionada
    for (int i = 0; i < quantidadeAtividades; i++) {
        if (atividades[i] == a)
            return false;
    }

    // No caso das pessoas da atividade serem diferentes das do projeto
    for (int j = 0; j < quantidadeAtividades; j++) {
        for (int k = 0; k < quantidadeAtividades; k++) {
            if (this->pessoasAdicionadas[j] != a->getPessoas()[k]) {
                cout << "Atividade nao adicionada.";
                return false;
            }
        }
    }

    // Atividade pode ser adicionada
    atividades[quantidadeAtividades] = a;
    quantidadeAtividades++;
    cout << "Atividade adicionada." << endl;
    return true;
}
/*
Atividade** Projeto::getAtividadesSemSupervisor (int &quantidade) {
    AtividadeComSupervisor* ativ = dynamic_cast<Atividade*> (this);

    for (int i = 0; i < quantidade; i++) {
        if (ativ->getSupervisor() == NULL) {
            this->atividadesSemSupervisor[quantidade++] =
            quantidade++;
        }
    }

    if ()
} */

bool Projeto::adicionar(Pessoa* p) {
    if (quantidadePessoas >= maximoValor)   // Overflow
        return false;

    for (int i = 0; i < quantidadePessoas; i++) {   // Pessoa ja adicionada
        if (pessoasAdicionadas[i] == p)
            return false;
    }

    pessoasAdicionadas[quantidadePessoas] = p;  // Adicionando a pessoa
    quantidadePessoas++;
    cout << "Pessoa adicionada no projeto." << endl;
    return true;
}

Pessoa** Projeto::getPessoas () {
    return this->pessoasAdicionadas;
}

int Projeto::getQuantidadePessoas () {
    return this->quantidadePessoas;
}
