#include <map>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    map<string, int> numeros_naturas;

    numeros_naturas["zero"] = 0;
    numeros_naturas["um"] = 1;
    numeros_naturas["dois"] = 2;

    cout << "Atribuicoes: "<<endl
    << "Zero => "<< numeros_naturas["zero"]<<endl
    << "Um =>" << numeros_naturas["um"]<<endl
    << "Dois =>"<< numeros_naturas["dois"]<<endl;


    return 0;
}
