#include <iostream>

using namespace std;

int main()
{
    unsigned nota;
    cout <<"Digite o valor da nota\n";
    cin >>nota;
    if ((50<=nota) && (nota<=100))
    {
        cout <<"Aprovado com sucesso\n";
    }
    else if((0<=nota) && (nota<=50))
    {
        cout <<"Reprovado\n";
    }else{
        cout<<"Nota invalida\n";
    }
    
    return 0;
}
