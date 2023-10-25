#include <iostream>

int main()
{
    bool run = true;
    int numero =0;
    while(run){
        std::cout << "Digite o numero a ser verificado: " << std::endl;
        std::cin >> numero;
        if((numero%2) == 0){
            std::cout <<"O VALOR E PAR"<<std::endl;
        }else{
            std::cout <<"O VALOR E IMPAR"<<std::endl;
        }
        char res;
        std::cout <<"Desejar sair? [y/N]"<<std::endl;
        std::cin >> res;
        if(res == 'y'){
            run =false;
        }
    }

    return 0;
}