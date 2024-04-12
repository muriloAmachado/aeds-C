#include <stdio.h>      // para as entradas e saidas
#include <stdbool.h>    // para valores logicos
#include <string.h>     // para cadeias de caracteres
#include <math.h>       // para funcoes matematicas
int main ( )
{
    int x = 0 ; // definir variavel com valor inicial
    double y = 3.5; // definir variavel com valor inicial
    char z = 'A'; // definir variavel com valor inicial
    bool w = false; // definir variavel com valor inicial
    // identificar
    printf ( "%s\n", "EXEMPLO- Programa - v0.0" );
    printf ( "%s\n", "Autor: Murilo Andrade" );
    printf ( "\n" ); // mudar de linha
    // mostrar valores iniciais
    printf ( "01. %s%d\n", "x = ", x );
    printf ( "02. %s%f\n", "y = ", y );
    printf ( "03. %s%c\n", "z = ", z );
    // converter entre tipos de dados (type casting)
    x = (int) z; // codigo inteiro equivalente ao caractere
    printf ( "04. %s%d -> %c\n", "x = ", x, z );
    x = (int) y; // parte inteira de real
    printf ( "05. %s%d -> %f\n", "x = ", x, y );
    x = 97;
    z = (char) x; // caractere equivalente ao codigo inteiro
    printf ( "06. %s%c -> %d\n", "z = ", z, x );
    x = (int) '0'; // codigo inteiro equivalente ao caractere
    z = (char) x; // caractere equivalente ao codigo inteiro
    printf ( "07. %s%c -> %d\n", "z = ", z, x );
    x = w; // codigo inteiro equivalente ao logico
    printf ( "08. %s%d -> %d\n", "x = ", x, w );
    // encerrar
    printf ( "\n\nApertar ENTER para terminar." );
    fflush ( stdin ); // limpar a entrada de dados
    getchar( ); // aguardar por ENTER
    return ( 0 ); // voltar ao SO (sem erros)
}