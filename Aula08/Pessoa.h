#ifndef PESSOA_H
#define PESSOA_H

// Faca os includes necessarios

class Pessoa {
public:
    Pessoa(string nome, double valorPorHora, int horasDiarias);
    virtual ~Pessoa();

    virtual double getValorPorHora();
    virtual int getHorasDiarias();
};

#endif // PESSOA_H
