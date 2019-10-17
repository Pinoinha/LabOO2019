/*
 * Faca os includes necessarios
 * Implemente os metodos
 */

 #include "Pessoa.h"

 double Pessoa::valorPorHoraPadrao = 8;

 Pessoa::Pessoa(string nome, double valorPorHora, int horasDiarias, int nusp) :
     Recurso (nome), FuncionarioUSP (nusp), horasDiarias (horasDiarias) {
    this->valorPorHora = &valorPorHora;
 }

 Pessoa::Pessoa(string nome, int horasDiarias, int nusp) :
 Recurso (nome), FuncionarioUSP (nusp), horasDiarias (horasDiarias) {
    this->valorPorHora = &valorPorHoraPadrao;
 }

 void Pessoa::setValorPorHoraPadrao(double valor) {
     Pessoa::valorPorHoraPadrao = valor;
 }

 double Pessoa::getValorPorHoraPadrao() {
     return valorPorHoraPadrao;
 }

 Pessoa::~Pessoa() {
    cout << "Pessoa destruida." << endl;
 }

 bool Pessoa::recebeValorPadrao() {
    if (this->valorPorHoraPadrao == 8)
        return true;
 }

 double Pessoa::getValorPorHora() {
    return *valorPorHora;
 }

 int Pessoa::getHorasDiarias() {
    return this->horasDiarias;
 }

 double Pessoa::getCusto(int dias) {
    double custo;

    custo = dias * horasDiarias * *valorPorHora;

    return custo;
 }
