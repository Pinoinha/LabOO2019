    #include <iostream>

    using namespace std;

    bool estaNoPrazo(int prazo, int horasAtividade, int horasDiarias) {
        int dia = 1;
        int horasTrabalhadas = 0;

        while(dia <= prazo)
        {
            if(dia % 4 != 0)
            {
                horasTrabalhadas += horasDiarias;
            }
            else if(dia % 4 == 0)
            {
                horasTrabalhadas += horasDiarias / 2;
            }
            dia++;
        }
        if(horasTrabalhadas >= horasAtividade)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // A FUNCAO MAIN NAO DEVE SER SUBMETIDA
    /*
    int main() {
      // FACA TESTES
      cout << estaNoPrazo(9, 16, 2) << endl;
    }//*/
