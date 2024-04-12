#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

    {
        printf ("Exercício 4.d\n");

        int numero, centena, dezena, unidade, resto, udc;

        printf("Digite um número com 3 digitos.\n");
        scanf("%d", &numero);

        resto = numero % 100;
        unidade = resto % 10;


        resto = numero/10;
        dezena = resto % 10;

        resto = numero / 100;
        centena = resto; 

        printf("%s%d\n", "Unidade = ", unidade);
        printf("%s%d\n", "Dezena = ", dezena);
        printf("%s%d\n", "Centena = ", centena);

        udc = (unidade*100) + (dezena*10) + centena;

        printf("O número no formato UDC ficará = %d\n", udc);
        
        return(0);
    }