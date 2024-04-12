#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>


int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();

int main()
{
    setlocale(LC_ALL,"portuguese");
    int op;
    printf("Escolha:\n");
    printf("1 - excercício 1\n");

    printf("2 - excercício 2\n");

    printf("3 - excercício 3\n");

    printf("4 - excercício 4\n");

    printf("5 - excercício 5\n");

    printf("6 - excercício 6\n");

    printf("7 - excercício 7\n");

    printf("8 - excercício 8\n");

    printf("0 - finalizar programa\n");
    scanf("%i",&op);
    switch (op)
    {
    case 1:
        ex01();
        break;
    case 2:
        ex02();
        break;
    case 3:
        ex03();
        break;
    case 4:
        ex04();
        break;
    case 5:
        ex05();
        break;
    case 6:
        ex06();
        break;
    case 7:
        ex07();
        break;
    case 8:
        ex08();
        break;
    case 0:
        printf("Finalizando o programa\n");
        break;
    default:
        printf("Escolha inv lida!\n");
    }
    return 0;


}
int ex01(){
    int num;

    printf("Digite um número inteiro:");
    scanf("%d", &num);

    if(num%2==0){
        printf("O número é par");
    }
    else{
        printf("O número é ímpar");
    }
    return 0;
}

int ex02()
{
    int nota1, nota2, nota3;
    float media;
    char name[50];

    printf("Nome do aluno:");
    scanf("%s", &name);

    printf("Digite a primeira nota do aluno:");
    scanf("%d", &nota1);

    printf("Digite a segunda nota do aluno:");
    scanf("%d", &nota2);

    printf("Digite a terceira nota do aluno:");
    scanf("%d", &nota3);

    media = (nota1+nota2+nota3) / 3.0;

    printf("A media do aluno %s é %.2f", name, media);

    return 0;
}
int ex03(){

    int temp;

    printf("Digite a temperatura da água:");
    scanf("%d", &temp);

    if(temp<=0){
        printf("A água está no estado sólido.\n");
    }

    if(100>temp>0){
        printf("A água está no estado líquido.\n");
    }

    else{
        printf("A água está no estado gasoso.\n");
    }

    return 0;
}

int ex04(){
    int num, numY;

    printf("Digite um número:");
    scanf("%d", &num);

    if(num<0){
        numY = pow(num, 2)  + 4;
        printf("%d", numY);
    }

    if(num>0){
        numY = pow(num, 3) - 3;
        printf("%d", numY);
    }

    else{
        printf("Error Mensage\n");
    }
    return 0;
}


int ex05(){

    int a, b, c, guard;

    guard=0;

    printf("Digite um número para A:");
    scanf("%d", &a);

    printf("Digite um número para B:");
    scanf("%d", &b);

    printf("Digite um número para C:");
    scanf("%d", &c);

    if(a>b){
        guard=b;
        b=a;
        a=guard;
        guard=0;
    }

    if(a>c){
        guard=c;
        c=a;
        a=guard;
    }

    if(b>c){
        guard=c;
        c=b;
        b=guard;
    }

    printf("A sequência crescnete dos número é: %d, %d, %d", a,b,c);
    return 0;
}

int ex06(){

    int x,y,z;

    printf("Digite três número separados por espaços:");
    scanf("%d %d %d", &x,&y,&z );

    //printf("%d %d %d", x,y,z);

    if((x%y==0)&&(x%z==0)){
        printf("O número é divisível por Y e Z.");
    }

    if ((x%y==0)&&(x%z!=0)){
        printf("O número é divisível por Y mas não por Z.");
    }

    if((x%z==0) && (x%y!=0)){
        printf("O número é divisível por Z mas não por Y.");
    }

    if((x%z!=0) && (x%y!=0)){
        printf("O número não é divisível nem Y nem por Z.");
    }

    return 0;
}

int ex07(){

    int numero, metade1, metade2, soma;

    printf("Digite um número de 4 digitos:");
    scanf("%i", &numero);

    metade2 = numero%100;
    metade1 = numero/100;

    soma = metade1 + metade2;

     if(pow(soma, 2)==numero){
        printf("Possui a característica.");
     }

     else{
        printf("Não possui a característica.");
     }

    return 0;
}

int ex08(){

    int num;

    printf("Digite um código correspondente aos número:");
    scanf("%d", &num);

    if(num==221){
        printf("Bernardo", num);
    }

    else if(num==211){
        printf("%i ----- Eustáquio", num);
    }

    else if(num==311){
        printf("%i ----- Luiz", num);
    }

    else if(num==312){
        printf("%i ----- Mário", num);
    }

    else if(num==332){
        printf("%i ----- Artur", num);
    }

    else{
        printf("Não possui nome correspondente.");
    }

    return 0;
}

int ex09(){

    int num;




}


