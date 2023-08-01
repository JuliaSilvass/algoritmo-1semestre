/*Exercício 2: Crie um algoritmo que declare um vetor de inteiros de 10
posições, preencha todas as posições com valores lidos e que escreva
na tela a soma de todos valores positivos e a soma de todos valores
negativos.*/

#include <stdio.h>
int main (){
    int valor [10]; 
    int maior = 0; 
    int menor = 0;

    printf("Digite 10 número \n");
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &valor [i]);
    }

    for (int i = 0; i < 10; i++){
        if (valor [i] >= 0){
            maior = valor [i] + maior; 
        } else {
            menor = valor [i] + menor;
        }
    }

    printf("A soma dos valores positivos: %d \n", maior);
    printf("A soma dos valores negativos: %d \n", menor); 
        
}