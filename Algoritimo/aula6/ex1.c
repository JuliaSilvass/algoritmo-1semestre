//f1: Calcular a soma dos números pares de 1 a 100.
#include <stdio.h>
int main () {
    int soma = 0;
    for ( int n = 2; n < 101; n=n+2){
            soma = soma + n;
    }
            printf("%d", soma);
    
}