/* Exercício 12:
▪ Declare uma matriz de inteiros de tamanho 6 por 6.
▪ Preencha a matriz com valores aleatórios.
▪ Escreva na tela todos elementos localizados acima da diagonal
principal.
▪ Escreva na tela todos elementos localizados abaixo da diagonal
principal.*/
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
 int main(){
    int m[6][6];
    srand(time(NULL));

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            m[i][j] = rand() % 99;

            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }

    printf("diagonais \n");
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if ((i == 0 & j == 0) || (i == 1 & j == 1) || (i == 2 & j == 2) || (i == 3 & j == 3) || (i == 4 & j == 4) || (i == 5 & j == 5)){
                printf("        ");
            } else {
                printf("%d \t", m[i][j]);
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++){
        switch (i){
        case 0:
            for (int j = 1; j < 6; j++){
                printf("%d, ", m[i][j]);
            }
            break;
        case 1: 
            for (int j = 2; j < 6; j++){
                printf("%d, ", m[i][j]);
            }
            break;
        case 2:
            for (int j = 3; j < 6; j++){
                printf("%d, ", m[i][j]);
            }
            break;
        case 3:
            for (int j = 4; j < 6; j++){
                printf("%d, ", m[i][j]);
            }
            break;
        case 4:
                printf("%d. \n", m[i][5]);
            break;
        }
    }
    
    for (int i = 1; i < 6; i++){
        switch (i){
        case 1: 
                printf("%d, ", m[i][0]);
            break;
        case 2:
            for (int j = 0; j < 2; j++){
                printf("%d, ", m[i][j]);
            }
            break;
        case 3:
            for (int j = 0; j < 3; j++){
                printf("%d, ", m[i][j]);
            }
            break;
        case 4:
            for (int j = 0; j < 4; j++){
                printf("%d, ", m[i][j]);
            }
            break;
        case 5:
            for (int j = 0; j < 5; j++){
                printf("%d, ", m[i][j]);
            }
            break;
        
        }
    }

 }  