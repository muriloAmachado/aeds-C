#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
    {
        printf("Exercício 4.e -\n");
        
        double salarioMinimo, valorKilowatt, total;
        int quantidade;

        printf("Digite o salário mínimo: ");
        scanf("%lf", &salarioMinimo);

        printf("Killowatts gastos na residência: ");
        scanf("%d", &quantidade);

        valorKilowatt = (salarioMinimo/7) / 100;
        total = quantidade * valorKilowatt;

        printf("O valor da conta será de %.2f\n", total);
        
        return 0;
    }