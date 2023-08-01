/*Exercício 7: Declare dois vetores de inteiros e preencha ambos com
números que obedeçam a uma ordem crescente. Escreva na tela todos os
elementos de ambos os vetores em uma única sequência, também em
ordem.*/

#include <stdio.h> 
int main(){
    int v1 [10];
    int v2 [10];

    printf("insira 10 numeros na ordem crescente: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &v1[i]);
    }

    printf("insira 10 numeros na ordem crescente: ");
    for (int j = 0; j < 10; j++){
        scanf("%d", &v2[j]);
    }

    printf("%d", v2[0]);

    for (int i = 1; i <= 10; i++){
        if (v1[i-1] > v1[i]){
            printf("número fora de ordem! %d \n", v1[i]);
        }
        if (v2[i-1] > v2[i]){
            printf("número fora de ordem! vetor2 %d \n", v2[i]);
        }
    }

    if (v1[9]<v2[0]){
        for (int i = 0; i < 10; i++){
            printf("%d ", v1[i]);
        } 
        for (int i = 0; i < 10; i++){
            printf("%d ", v2[i]);
        } 
    }
    
    if (v1[9]>v2[0]){
        for (int i = 0; i < 10; i++){
            printf("%d ", v2[i]);
        } 
        for (int i = 0; i < 10; i++){
            printf("%d ", v1[i]);
        } 
    }

    
    return 0;
}