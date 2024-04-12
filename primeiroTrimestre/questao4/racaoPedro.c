#include <stdio.h>  
#include <math.h>
#include <string.h>

int main()
    {
        printf("Exercício 4.i -\n");
        
        int quantidadeSaco, quantidadeGato;
        float restante;

        printf("Digite o peso do saco de ração em KG:");
        scanf("%d", &quantidadeSaco);

        printf ("Digite o peso da quantidade oferecida, em gramas, aos gatos diariamente:");
        scanf("%d", &quantidadeGato);

        quantidadeSaco = quantidadeSaco*1000;
        restante = quantidadeSaco - (quantidadeGato*5);
        restante = restante/1000;

        printf("Após 5 dias restará %.2fkg no saco de ração\n", restante);

        return (0);
    }