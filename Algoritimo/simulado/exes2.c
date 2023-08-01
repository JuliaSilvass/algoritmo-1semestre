/*Na matemática, o fatorial de um número inteiro positivo n, representado por n!,
é o produto de todos inteiros positivos de 1 até n. Observe o exemplo abaixo do cálculo do
fatorial de 5:

5! = 1 × 2 × 3 × 4 × 5 = 120

Desenvolva um algoritmo que leia um número inteiro n maior ou igual a zero e exiba na tela
o fatorial de n. Considere que 0! é igual a 1. O algoritmo deve tratar entradas inválidas
exibindo uma mensagem de erro e solicitando um novo número imediatamente.*/
#include <stdio.h>
int main (){
    int n;
    int f = 1;

    printf("Digite um numero na qual deseja o fatorial: ");
    scanf("%d", &n);

    while (n < 0){
        printf("numero invalido! digite novamente: ");
        scanf("%d", &n);
    }

    if (n == 0){
        printf("%d! = 1", n);
    } else {
        for (int i = 1; i <= n; i++){
            f = f * i;

        }
        printf("%d! = %d", n, f);
    }
    
    return 0;
}