#include <stdio.h>      // para as entradas e saidas
#include <stdbool.h>    // para valores logicos
#include <string.h>     // para cadeias de caracteres
#include <math.h>       // para funcoes matematicas

int main ( )
{
// definir dados
int x = 0 ; // definir variavel com valor inicial
double y = 3.5; // definir variavel com valor inicial
char z = 'A'; // definir variavel com valor inicial
bool w = false; // definir variavel com valor inicial
// identificar
printf ( "%s\n", "EXEMPLO - Programa - v0.0 - continuacao" );
printf ( "%s\n", "Autor: ______________________" );
printf ( "\n" ); // mudar de linha
w = true;
x = w; // codigo inteiro equivalente ao logico
printf ( "09. %s%d -> %d\n", "x = ", x, w );
x = (w==false); // equivalente 'a comparacao de igualdade (true igual a false)
printf ( "10. %s%d -> %d\n", "x = ", x, w );
x = !(w==false); // equivalente ao contrario da comparacao de valores (true igual a false)
printf ( "11. %s%d -> %d\n", "x = ", x, w );
x = (w!=false); // equivalente 'a comparacao de diferenca (true diferente de false)
printf ( "12. %s%d -> %d\n", "x = ", x, w );
w = (x < y); // equivalente 'a comparacao entre (x) e (y)
printf ( "13. %s%d < %f = %d\n", "w = ", x, y, w );
w = (x <= y); // equivalente 'a comparacao entre (x) e (y)
printf ( "14. %s%d <= %f = %d\n", "w = ", x, y, w );
w = (y > x); // equivalente 'a comparacao entre (x) e (y)
printf ( "15. %s%f > %d = %d\n", "w = ", y, x, w );
w = (y >= x); // equivalente 'a comparacao entre (x) e (y)
printf ( "16. %s%f >= %d = %d\n", "w = ", y, x, w );
// encerrar
printf ( "\n\nApertar ENTER para terminar." );
fflush ( stdin ); // limpar a entrada de dados
getchar( ); // aguardar por ENTER
return ( 0 ); // voltar ao SO (sem erros)
} // fim main( )