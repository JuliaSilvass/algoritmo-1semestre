/*Na matemática, a Sequência de Fibonacci é uma sequência de números
inteiros em que os dois primeiros números são 0 e 1. A partir do terceiro número, cada
elemento subsequente é obtido pela soma dos dois números anteriores. Observe abaixo o
exemplo dos dez primeiros números Fibonacci:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34

Desenvolva um algoritmo que gere a Sequência de Fibonacci até o seu n-ésimo número.
Esse algoritmo deve permitir que o usuário insira um número inteiro n maior que zero. Em
seguida, o algoritmo deve escrever os primeiros n números da sequência de Fibonacci como
resultado. O algoritmo deve tratar entradas inválidas exibindo uma mensagem de erro e
solicitando um novo número imediatamente.*/
#include <stdio.h> 
int main(){
    int n; 
    int f1 = 0;
    int f2 = 1;
    int f3 = 0;
    
    printf("Insira um numero (>0) para gerar o fibonacci: ");
    while (scanf("%d", &n) != 1 || n <= 0){
         printf("numero invalido! digite novamente: ");
    }

    
    printf("%d ", f1);
    for (int i = 0; i < n; i++){
        if (f1 == n){
            break;
        } else {
            f1 = f2 + f3;
            printf("%d ", f1);
            f2 = f3;
            f3 = f1;
        }       
    }
    
}