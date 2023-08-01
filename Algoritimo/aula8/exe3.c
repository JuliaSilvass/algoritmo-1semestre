/*Faça um algoritmo que leia uma frase de no máximo 50 caracteres e
que escreva na tela o tamanho da última palavra desta frase.*/
#include <stdio.h>
int main(){
    char frase [50];
    int tam = 0;

    printf("Digite uma frase: \n");
    scanf("%[^\n]", frase);

    while (frase[tam] != '\0'){
        tam++;
    }

    int espaco = tam - 1;
    while (frase[espaco] != ' '){
        espaco--;
    }

    int p = (tam-espaco - 1);
    printf("o tamanho da ultima palavra e: %d \n", p);
    
    
}
