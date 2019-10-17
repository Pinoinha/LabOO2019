#ifndef PESSOA_H
#define PESSOA_H

#include "Recurso.h"
#include "FuncionarioUSP.h"
#include <iostream>

// Faca os includes necessarios

class Pessoa : public Recurso, public FuncionarioUSP {
public:
    Pessoa(string nome, double valorPorHora, int horasDiarias, int nusp);
    Pessoa(string nome, int horasDiarias, int nusp);
    virtual ~Pessoa();

    static void setValorPorHoraPadrao(double valor);
    static double getValorPorHoraPadrao();

    virtual bool recebeValorPadrao ();
    virtual double getValorPorHora();
    virtual int getHorasDiarias();

    double getCusto(int dias);

private:
    static double valorPorHoraPadrao;
    double* valorPorHora;
    int horasDiarias;
};

#endif // PESSOA_H
