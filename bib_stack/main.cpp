#include <iostream>
#include <stack>

using namespace std;

/**
 * Last in first out
*/

int main()
{
    stack<int> pilha;

    pilha.push(20);
    pilha.push(31);
    pilha.push(75);
    pilha.push(83);
    pilha.push(34);

    cout << "Topo da pilha: "<<pilha.top() << endl;
    cout << "Retirando elemento do topo: "<< endl;
    pilha.pop();
    cout << "Topo da pilha: "<<pilha.top()<<std::endl;
    cout << "Tamanho da pilha: "<<pilha.size()<<std::endl;
    cout << "Lista Vazia: "<<pilha.empty()<<std::endl;

    return 0;
}
