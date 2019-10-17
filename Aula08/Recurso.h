#ifndef RECURSO_H
#define RECURSO_H

#include <string>

using namespace std;

// Faca as modificacoes necessarias

class Recurso {
public:
    Recurso(string nome);
    virtual ~Recurso();

    virtual double getCusto (int dias) = 0;

    virtual string getNome();

private:
    string nome;
};

#endif // RECURSO_H
