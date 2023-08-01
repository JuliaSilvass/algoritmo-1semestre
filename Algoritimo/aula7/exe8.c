/*Exercício 8: Declare um vetor de inteiros e preencha com números
aleatórios. Leia um número do teclado que represente uma posição deste
vetor. Remova o elemento da posição informada e mova para a esquerda
uma posição todos elementos de posições maiores que P.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int ale [6];
    int num; 

    srand(time(NULL));
    
    for (int i = 0; i < 6; i++){
        ale[i] = rand() % 6;
    }
    
    printf("digite um número entre 0-5: \n");   
    scanf("%d", &num);

    for (int i = 0; i < 6; i++){
        printf("vetor: %d\n", ale[i]);
        if (i == num){
            printf("numero na posição %d corresponde ao numero %d \n", num, ale[i]);
        }
    }
    
    for (int j = num; j < 6; j++){
        ale[j] = ale [j + 1];
        printf("depois de excluido fica assim: %d\n", ale[j]); 
    }

}
