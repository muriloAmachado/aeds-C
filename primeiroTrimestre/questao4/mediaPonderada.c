#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
    {
        int nota1, nota2, nota3, peso1, peso2, peso3, somaPeso;
        double mediaPonderada;

        printf("Digite a primeira nota e seu peso.\n");
        scanf("%d", &nota1);
        scanf("%d", &peso1);

        printf("Digite a segunda nota e seu peso.\n");
        scanf("%d", &nota2);
        scanf("%d", &peso2);

        printf("Digite a terceira nota e seu peso.\n");
        scanf("%d", &nota3);
        scanf("%d", &peso3);

        somaPeso = peso1+peso2+peso3;
        mediaPonderada = (nota1*peso1+nota2*peso2+nota3*peso3)/(double)somaPeso;

       printf("A média ponderada das notas é %.2f\n", mediaPonderada);
       return(0);
    }