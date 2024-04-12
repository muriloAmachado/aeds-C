#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

    {
        printf("Exercício 4.n -\n");
        
        int hora, minutos, minDia;

        printf("Digite a hora: ");
        scanf("%d", &hora);

        printf("Digite os minutos: ");
        scanf("%d", &minutos);

        minDia = minutos + (hora*60);

        printf("Já se passaram %d minutos desde o início do dia.\n", minDia);

        return(0);
    }