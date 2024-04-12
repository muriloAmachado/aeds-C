#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

    {
        printf("Exercício 4.j -\n");
        
        float A,B,C;

        printf("Digite o valor de A: ");
        scanf("%f", &A);

        printf("Digite o valor de B: ");
        scanf("%f", &B);

        C = B;
        B = A;
        A = C;

        printf("%s%.4f\n", "O valor de A se tornou: ", A);
        printf("%s%.4f\n", "O valor de B se tornou: ", B);

        return(0);

    }