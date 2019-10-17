// Implemente os metodos
#include "FuncionarioUSP.h"

FuncionarioUSP::FuncionarioUSP(int nusp) : nusp (nusp) {
}

FuncionarioUSP::~FuncionarioUSP() {
    cout << "FuncionarioUSP destruido." << endl;
}

int FuncionarioUSP::getNusp() {
    return this->nusp;
}
