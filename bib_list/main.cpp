#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista_numeros;

    srand(time(NULL));
    lista_numeros.push_back(rand() % 100);
    lista_numeros.push_back(rand() % 100);
    lista_numeros.push_back(rand() % 100);

    for (int numero : lista_numeros)
    {
        cout << numero << ' ';
    }
    cout <<endl;

    return 0;
}
