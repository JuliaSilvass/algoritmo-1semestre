/*Exercício 9: Declare uma matriz de inteiros de 10 linhas e 5 colunas.
Preencha a matriz com valores aleatórios. Encontre o maior elemento
em uma matriz.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz [10][5];
    int maior = 0; 
    
    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 5; j++){
            matriz[i][j] = rand() % 99; // sorteia numeros de 0 a 99

            if (matriz[i][j] > maior ){
                maior = matriz [i][j]; // aqui a variável maior vai guardando a o maior número.
            }
            
        }
            
    }

    printf("o maior número é: %d", maior);
    
}