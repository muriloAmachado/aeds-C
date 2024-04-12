#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

    {
        printf("Exercício 4.m -\n");
        
        int numerador,denominador;
        float numero, denominadorDec;
        
        printf("Digite o númerador da fração: ");
        scanf("%d", &numerador);

        printf("Digite o denominador da fração: ");
        scanf("%d", &denominador);

        denominadorDec = denominador;     
        numero = numerador/denominadorDec;

        printf("O número na forma decimal é %.2f\n", numero);
        return(0);
    }