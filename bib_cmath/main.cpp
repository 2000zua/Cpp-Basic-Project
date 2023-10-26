#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    cout <<"Constante de Euler: "<< M_E<<endl;
    cout <<"Logaritmo Constante de Euler na base 2: "<< M_LOG2E<<endl;
    cout <<"Logaritmo Constante de Euler na base 10: "<< M_LOG10E<<endl;
    cout <<"Logaritmo de 2 na base Constante de Euler: "<< M_LN2<<endl;
    cout <<"Logaritmo de 10 na base Constante de Euler: "<< M_LN10<<endl;
    cout <<"Constante de Pi: "<< M_PI<<endl;
    cout <<"Constante de Pi dividido por 2: "<< M_PI_2<<endl;
    cout <<"Constante de Pi dividido por 4: "<< M_PI_4<<endl;
    cout <<"Inverso da Constante de Pi: "<< M_1_PI<<endl;
    cout <<"2 Dividido por Pi: "<< M_2_PI<<endl;
    cout <<"2 Dividido por raiz quadrado Constante de Pi: "<< M_2_SQRTPI<<endl;
    cout <<"Raiz quadrada de 2: "<< M_SQRT2<<endl;
    cout <<"Inverso da Raiz quadrada de 2: "<< M_SQRT1_2<<endl;
    int valor_absuluto = abs(-24);
    cout <<"Valor absuluto: "<< valor_absuluto<<endl;
    if (system(NULL))
    {
        int retorno = system("uname -ro");

        cout <<"Saida do comando"<< retorno<<endl;
    }
    
    return 0;
}
