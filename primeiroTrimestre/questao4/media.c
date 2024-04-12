#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
    {
        int valor1, valor2, valor3, valor4;
        float media;

        printf("Digite o primeiro valor.\n");
        scanf("%d", &valor1);

        printf("Digite o segundo valor.\n");
        scanf("%d", &valor2);

        printf("Digite o terceiro valor.\n");
        scanf("%d", &valor3);

        printf("Digite o querto valor.\n");
        scanf("%d", &valor4);

        media = (valor1+valor2+valor3+valor4)/4.0;
        printf("Média = %.2f\n", media);

        return (0);
    }
