#include <iostream>
#include <cmath>

using namespace std;

bool ehProximo(double a, double b) {
    return abs(a - b) < 0.001;
}

double* encontrarPessoa(double valoresPorHora[], double horasDiarias[], int quantidade, double valorPorHora, double horaDiaria) {

    for (int i = 0; i < quantidade; i++) {
            if(ehProximo(valoresPorHora[i], valorPorHora) && ehProximo(horasDiarias[i], horaDiaria)) {
                return &valoresPorHora[i];
            }
    }

    cout << "NULL";
    return NULL;
}

//Utilize o main para testar a funcao
//NAO ESQUECER DE APAGAR ANTES DE ENVIAR AO JUDGE!!!

/*
int main() {
    double valoresHora[] = {10.0, 9.0}, horasDiarias[] = {8.0, 11.0};
    double *pessoa = encontrarPessoa(valoresHora, horasDiarias, 2, 9.0, 11.0);

    // Antonio: 10 reais/hora e 8 horas/dia
    // Bruna: 9 reais/hora e 11 reais/dia

    cout << pessoa << endl;
    cout << "Aula02ex01" << endl;

    return 0;
} */
