#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

    {       
        printf("Exercício 4.f -\n");

        int baseRetangulo, alturaRetangulo, area, perimetro;
        float diagonal;

        printf("Informe a medida da base do retângulo: ");
        scanf("%d", &baseRetangulo);

        printf("Informe a medida da altura do retângulo: ");
        scanf("%d", &alturaRetangulo);

        area = alturaRetangulo*baseRetangulo;
        perimetro = alturaRetangulo*2 + baseRetangulo*2;
        diagonal = pow(baseRetangulo,2) + pow(alturaRetangulo,2);
        diagonal = sqrt(diagonal);

        printf("Área = %d\nPerímetro = %d\nDiagonal = %.2f\n", area, perimetro, diagonal);
        return (0);
        
    }