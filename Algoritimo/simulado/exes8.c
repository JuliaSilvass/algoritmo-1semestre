/*Faça um algoritmo que leia e que armazene em um vetor a temperatura média
de todos os dias do ano. Faça quatro funções com o objetivo de:
a) Retornar a menor temperatura do ano contida no vetor;
b) Retornar a maior temperatura do ano contida no vetor;
c) Retornar a temperatura média anual;
d) Retornar o número de dias no ano em que a temperatura foi inferior à média anual.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menor (int t[365], int tamanho){
    int valor = 0;
    for (int i = 0; i < tamanho; i++){
        if (t[i] < valor) {
            valor = t[i];
        }
    }
    printf(" a menor temperatura: %d", valor);
}

int main(){
    int t[365]; 
    int tamanho = 365;
    srand(time(NULL));

    for (int i = 0; i < 365; i++){
        t[i] = rand() % 50;
    }

    menor(t, tamanho);
    

}
