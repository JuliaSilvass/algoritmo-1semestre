/*Exercício 11: Declare uma matriz de inteiros de 5 linhas e 10 colunas.
Preencha a matriz com valores aleatórios. Escreva na tela a matriz
transposta.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int m[5][10];
    srand(time(NULL));

    printf("Matriz normal! \n");

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 10; j++){
            m[i][j] = rand() % 99;

            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta! \n");

    for (int j = 0; j < 10; j++){
        for (int i = 0; i < 5; i++){
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
    
}