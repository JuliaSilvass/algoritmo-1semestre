/*Exercício 3: Crie um algoritmo que declare um vetor de inteiros de 10
posições, preencha todas as posições com valores lidos e em seguida
escreva na tela a quantidade de números pares e ímpares armazenados.*/

#include <stdio.h> 
int main (){
    int valor [10]; 
    int contpar = 0;
    int contimpar = 0; 
 
    for (int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &valor [i]); 
    }

    for (int i = 0; i < 10; i++){
        if (valor [i] % 2 == 0){
        contpar = 1 + contpar;
        } else {
        contimpar = 1 + contimpar; 
        }
    }
    
    printf("A quantidade de valores par é: %d \n", contpar);
    printf("A quantidade de valores impares é: %d \n", contimpar);
    
}