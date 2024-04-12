#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
    {
        printf("Exercício 4.k -\n");
        
        int progressao, termoInicial, termo;

        printf("Digite o primeiro termo da PA: "); 
        scanf("%d", &termoInicial);
        printf("Digite a progressão da PA: ");
        scanf("%d", &progressao);

        termo = termoInicial + (progressao*9);

        printf("O décimo termo da progressão será %d\n", termo);

        return(0);

    }