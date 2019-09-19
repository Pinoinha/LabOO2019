#include "AtividadeComSupervisor.h"

//Implemente os metodos

AtividadeComSupervisor::AtividadeComSupervisor (string nome, int horasNecessarias, 
                      int maximoPessoas, Pessoa* supervisor) : 
                      Atividade(nome, (horasNecessarias + 1 + (horasNecessarias / 4)), maximoPessoas),
                      supervisor (supervisor) {
}

AtividadeComSupervisor::~AtividadeComSupervisor () {
    cout << "Atividade com supervisor destruida" << endl;
}

Pessoa* AtividadeComSupervisor::getSupervisor () {
    return this->supervisor;
}