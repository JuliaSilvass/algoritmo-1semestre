/*Desenvolva um algoritmo que escreva na tela todos números pares de 0 até
um número digitado pelo usuário. A escrita na tela deverá ser feita da seguinte forma:
5 números separados por tabulação (\t) e ao final uma nova linha (\n).*/
#include <stdio.h>
int main (){
    int n; 

    printf("digite um numero: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (i % 10 == 0){
            printf("\n");   
        }
        if (i % 2 == 0){
           printf("%d \t", i);
        } 

    }

}