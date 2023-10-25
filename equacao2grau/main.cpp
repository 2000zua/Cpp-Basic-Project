#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float x1, x2;
    double delta;

    cout <<"Inserir os conficentes da equcao: [ax2 + bx + c = 0]"<<endl;
    cout <<"a: ";
    cin >> a;
    cout <<"b: ";
    cin >> b;
    cout <<"c: ";
    cin >> c; 

    delta = pow(b,2) - 4*a*c;
    if (delta == 0)
    {
        cout <<"Delta igual a 0.\nx1==x2\n"<<endl;
        x1 = x2 = (-b)/(2*a);
        cout <<"x1=x2="<<x1<<endl;
    }
    else if (delta < 0)
    {
        cout <<"Nao existem raizes reias para esta equacao"<<endl;
    }
    else
    {
        cout <<"Delta maio que 0\nx1 != x2\n"<<endl;
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        cout <<"x1="<<x1<<endl;
        cout <<"x2="<<x2<<endl;
    }
       
    return 0;
}
