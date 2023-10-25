#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int segundo, minuto, hora, resto;

    cout <<"Digite o valor dos segundos: "<<endl;
    cin >> segundo;

    hora = segundo / 3600;
    resto = segundo % 3600;
    minuto = resto / 60;
    segundo = resto %60;

    cout <<"time: "<<hora<<":"<<minuto<<":"<<segundo<<endl;

    return 0;
}

