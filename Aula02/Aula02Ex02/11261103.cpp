# include <iostream>
# include <cmath>

using namespace std;

void calculaAtividade (double horasDiarias[], double valoresPorHora[],
                       int horasNecessarias, double* custo, int &duracao, int quantidade) {

    double somaHoras = 0.0, somaCustos = 0.0;

    if (quantidade != 0) {
        for (int i = 0; i < quantidade; i++) {
            somaHoras += horasDiarias[i];
        }
        duracao = ceil((horasNecessarias / somaHoras));

        for (int i = 0; i < quantidade; i++) {
            somaHoras += horasDiarias[i];
            somaCustos += duracao * horasDiarias[i] * valoresPorHora[i];
        }

        *custo = somaCustos;
    }

    else {
        *custo = -1.0;
        duracao = -1.0;
    }
}

//Utilize o main para testar a funcao
//NAO ESQUECER DE APAGAR ANTES DE ENVIAR AO JUDGE!!!
/*
int main() {
    double valoresPorHora[] = {10.0, 9.0}, horasDiarias[] = {8.0, 11.0}, custo;
    int duracao;

    calculaAtividade(horasDiarias, valoresPorHora, 35, &custo, duracao, 2);

    cout << duracao << endl;
    cout << custo << endl;
    cout << "Aula02ex02" << endl;
    return 0;
}*/
