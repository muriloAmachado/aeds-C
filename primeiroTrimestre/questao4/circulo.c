#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
    {
        printf("Exercício 4.g -");
        
        int raio;
        float area, perimetro;
        float pi = 3.14;

        printf("Digite o raio do círculo:");
        scanf("%d", &raio);

        area = pow(raio,2) * pi;
        perimetro = 2*raio*pi;

        printf("Área = %.2f\nPerímetro = %.2f\n", area, perimetro);

        return (0);

    }