/*Faça um algoritmo que leia uma palavra de no máximo 15 caracteres e
que escreva na tela o tamanho da palavra digitada.*/
#include <stdio.h>
int main (){
    char p[15];

    printf("Digite seu nome: \n");
    scanf("%s", p);

    for (int i = 0; i < 15; i++){
        if(p[i] == '\0'){
            printf("o tamanho da palavra %s e %d", p, i);
            break;
        }
    }
    


}