#ifndef FUNCIONARIOUSP_H
#define FUNCIONARIOUSP_H

#include <iostream>

using namespace std;

class FuncionarioUSP {
public:
    FuncionarioUSP(int nusp);
    virtual ~FuncionarioUSP();

    int getNusp();
private:
    int nusp;
};

#endif // FUNCIONARIOUSP_H
