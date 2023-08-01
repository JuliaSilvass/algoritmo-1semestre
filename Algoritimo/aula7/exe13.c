/*Exercício 13:
▪ Declare duas matrizes de inteiros A e B de tamanho 5 por 5.
▪ Preencha as matrizes como quiser.
▪ Escreva na tela a matriz C resultante da multiplicação de A e B.*/
#include <stdio.h> 
int main(){
    int a[5][5];
    int b[5][5];
    int c[5][5];
    int p = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Digite a linha %d e a coluna %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Digite a linha %d e a coluna %d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; i++){
            for (int k = 0; k < 5; k++){
                p = (a[i][k]*b[k][i]) + p;
            }
            c[i][j] = p;
            printf("%d \n", c[i][j]);
            p = 0;
        }
         
    }
    
}