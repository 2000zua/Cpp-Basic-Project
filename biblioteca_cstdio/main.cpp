#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    /**  putchat()
     * Imprimi um unico carracter na tela
     * */
    char c = '$';
    putchar(c);

    /**
     * puts()
     * Imprime uma cadeia de caracter na no console
    
    */
   puts("\nOla mundo complicado!\n");

   /**
    * getchar()
    * Pegar um unico caracter digitado no console
   */
  char unico = getchar();
  cout <<" "<<unico;

  /**
   * printf
  */
   int num =5;
   float decimal = 5.22344f;
   double ddecimal = 9.7454634;
   char carat = '^';
   puts("\nTestar o printf"); 
   printf("Inteiro: %d\nFloat: %f\nDouble: %lf\n", num, decimal, ddecimal);
   printf("Decimal com uma casa: %0.1f\n", decimal);
   printf("Decimal com representacao menor: %0.2g\n", ddecimal);
   printf("Ben-vindo, %s. Seu caractere: %c\n", "Angelo Abreu", carat);

   char nome[32];
   scanf("%32s", nome);
   puts(nome);
  




    return 0;
}
