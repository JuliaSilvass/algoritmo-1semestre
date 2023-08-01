/*Exercício 10: Declare uma matriz de inteiros de tamanho 5 por 5.
Preencha a matriz com valores aleatórios. Escreva na tela a soma dos
valores de cada uma das 5 linhas e de cada uma das 5 colunas.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int m[5][5];
    int soma = 0;
    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            m[i][j] = rand() % 99;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d \n", m[i][j]);
        }
        
    }
    
    
    //soma da linha 1
    for (int i = 0; i < 5; i++){
        soma = m[0][i] + soma;
    }
    printf("A soma da primeira linha e: %d\n", soma);
    soma = 0; 

    //soma da linha 2
    for (int i = 0; i < 5; i++){
        soma = m[1][i] + soma;
    }
    printf("A soma da segunda linha e: %d\n", soma);
    soma = 0; 

    //soma da linha 3
    for (int i = 0; i < 5; i++){
        soma = m[2][i] + soma;
    }
    printf("A soma da terceira linha e: %d\n", soma);
    soma = 0; 

    //soma da linha 4
    for (int i = 0; i < 5; i++){
        soma = m[3][i] + soma;
    }
    printf("A soma da quarta linha e: %d\n", soma);
    soma = 0; 

    //soma da linha 5
    for (int i = 0; i < 5; i++){
        soma = m[4][i] + soma;
    }
    printf("A soma da quinta linha e: %d\n", soma);
    soma = 0; 

    //soma da coluna 1
    for (int i = 0; i < 5; i++){
        soma = m[i][0] + soma;
    }
    printf("A soma da primeira coluna e: %d\n", soma);
    soma = 0; 

    //soma da coluna 2
    for (int i = 0; i < 5; i++){
        soma = m[i][1] + soma;
    }
    printf("A soma da segunda coluna e: %d\n", soma);
    soma = 0; 

    //soma da coluna 3
    for (int i = 0; i < 5; i++){
        soma = m[i][2] + soma;
    }
    printf("A soma da terceira coluna e: %d\n", soma);
    soma = 0; 

    //soma da coluna 4
    for (int i = 0; i < 5; i++){
        soma = m[i][3] + soma;
    }
    printf("A soma da quarta coluna e: %d\n", soma);
    soma = 0; 

    //soma da coluna 5
    for (int i = 0; i < 5; i++){
        soma = m[i][4] + soma;
    }
    printf("A soma da quinta coluna e: %d\n", soma);
    soma = 0; 


}