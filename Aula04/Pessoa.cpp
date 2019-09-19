/*
 * Faca os includes e coloque a implementacao dos metodos aqui!
 */

#include <iostream>
#include "Pessoa.h"

using namespace std;

void Pessoa::setNome (string nome) {
  this->nome = nome;
}

void Pessoa::setDisponivel (bool disponivel) {
  this->disponivel = disponivel;
}

void Pessoa::setHorasDiarias (int horasDiarias) {
  this->horasDiarias = horasDiarias;
}

bool Pessoa::isDisponivel() {
  return disponivel;
}

int Pessoa::getHorasDiarias() {
  return horasDiarias;
}

void Pessoa::imprimir() {
  cout << this->nome << ": ";
  if (!disponivel) {
    cout << "in";
  }
  cout << "disponivel - " << horasDiarias << " hora(s) por dia" << endl;
}
