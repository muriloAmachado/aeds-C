#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>


int main()
{
    int num1,num2;
    bool resposta;

    printf("  09.)ler dois valores inteiros do teclado e imprimir 1 se o primeiro é par e positivo, e o segundo é ímpar e negativo, e imprimir 0 caso não satisfaça a condição.\n");
    printf("digite o primeiro numero\n");
    scanf("%i",&num1);
     printf("digite o segundo numero\n");
    scanf("%i",&num2);
    resposta=(num1%2==0 && num1>0 && num2%2!=0 && num2<0);
    printf("%i\n",resposta);
    return 0;

}