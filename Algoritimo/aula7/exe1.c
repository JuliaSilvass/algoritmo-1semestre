/*Exercício 1: Crie um algoritmo que declare um vetor de inteiros de 10
posições, preencha todas as posições com valores lidos e que em
seguida escreva na tela todos os valores armazenados.*/

#include <stdio.h> 
int main (){
    int a [10]; 
    
    printf("Digite 10 números: ");
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 10; i++){
        printf("O numero é: %d \n", a[i]);
    }
}