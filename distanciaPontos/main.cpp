#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1,x2,y1,y2,distancia;

    cout <<"Insira os valores do ponto A(x1, y1)"<<endl;
    cout <<"x1: ";
    cin >>x1;
    cout <<"y2: ";
    cin >>y1;

    cout <<"Insira os valores do ponto B(x2, y2)"<<endl;
    cout <<"x2: ";
    cin >>x2;
    cout <<"y2: ";
    cin >>y2;

    distancia = sqrtf(pow((x2-x1),2)+pow((y2-y1),2));

    cout <<"O valor da distancia dos pontos eh: "<<distancia<<endl;

    return 0;
}
