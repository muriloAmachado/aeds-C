#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
    {
        printf("Exercício 4.h -\n");

        int cateto1, cateto2;
        float hipotenusa;

        printf("Digite o valor do cateto 1:\n");
        scanf("%d", &cateto1);

        printf("Digite o valor do cateto 2:\n");
        scanf("%d", &cateto2);

        hipotenusa = pow(cateto1,2) + pow(cateto2,2);
        hipotenusa = sqrt(hipotenusa);

        printf("A hipotenusa deste triângulo é %.2f\n", hipotenusa);

        return (0);
    }