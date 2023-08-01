/*Exercício 6: Declare um vetor de inteiros e preencha com números que
obedeçam a uma ordem crescente. Leia um número inteiro N. Escreva na
tela a posição deste elemento no vetor caso encontrado, ou então, escreva
a posição na qual este elemento apareceria caso fosse inserido no vetor
ordenado.*/
#include <stdio.h>
int main (){
    int v[10];
    int n;

    printf("insira 10 números na ordem crescente: ");

    for (int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    
    printf("Insira um número: ");
    scanf ("%d", &n);

    for (int i = 0; i < 10; i++){
        if (v[i] == n){
            printf ("O número %d está na posição %d", v[i], i);
        }
    }
     
}