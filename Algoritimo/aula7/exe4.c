/*Exercício 4: Crie um algoritmo que declare um vetor de caracteres de
10 posições, preencha todas as posições com caracteres lidos e que
escreva na tela todas as vogais (minúsculas e maiúsculas) armazenadas
e suas respectivas posições no vetor.*/

#include <stdio.h>
int main () {

    char valor [10];

    for (int i = 0; i < 10; i++){
        printf("Digite o %d caractere: ", i);
        scanf("\n %c", &valor [i]);
    }

    for (int i = 0; i < 10; i++){
        switch (valor [i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vogal: %c, posiçao: valor [%d] \n", valor [i], i);
        }
    }
    
    
}