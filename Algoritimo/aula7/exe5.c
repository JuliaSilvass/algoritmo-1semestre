/*Exercício 5: Declare um vetor de inteiros e preencha com números
aleatórios na faixa de 1-20. Leia um número N do teclado (na faixa de
2-40) e escreva na tela duas posições do vetor que quando somadas
resultam em N.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand (time(NULL));
    int num[10];
    int numN = 0;

    for (int i = 0; i < 10; i++){
        num[i] = rand() % 20 + 1; //acho que o + 1 é por causa que o rand começa no 0 e preciso de 1-20. 
        printf ("%d \t", num[i]);
    }

    printf("\n Digite um número entre 2-40: ");
    scanf("%d", &numN);

    // não entendo esse for, com i <= 8 e i <= 9 e j= i +1
    for (int i = 0; i <= 8; i++)
    {
        for (int j = i+1; j <= 9; i++)
        {
            if (num[i] + num[j] == numN)
            {
                printf("%d + %d = %d \n", num[i], num[j], numN);
            }
        }
    }
}