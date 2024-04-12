#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
    {
        printf("Exercício 4.l -\n");
        
        int progressao, termoInicial, termo;

        printf("Digite o primeiro termo da PG: "); 
        scanf("%d", &termoInicial);
        printf("Digite a progressão da PG: ");
        scanf("%d", &progressao);

        termo = termoInicial * pow(progressao,4);

        printf("O décimo termo da progressão será %d\n", termo);

        return(0);

    }