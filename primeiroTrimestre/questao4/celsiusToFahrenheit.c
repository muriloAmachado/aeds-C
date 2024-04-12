#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
    {
        printf("Exerício 4.c\n");
        
        int temperaturaCelsius;
        double temperaturaFahrenheit;

        printf("Digite a  temperatura em Celsius\n");
        scanf("%d", &temperaturaCelsius);
        
        temperaturaFahrenheit = (temperaturaCelsius*9)/5.0 + 32;

       printf("A temperatura em Fahrenheit é %.2f\n", temperaturaFahrenheit);
       return(0);
    }