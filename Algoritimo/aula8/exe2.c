/*Faça um algoritmo que leia uma palavra de no máximo 15 caracteres e
que escreva na tela a palavra inversa, ou seja, como se fosse lida da
direita para a esquerda.*/
#include <stdio.h> 
int main(){
    char palavra [15];
    int tam = 0; 

    printf("Digite uma palavra: \n");
    scanf("%s", palavra);

    while (palavra[tam] != '\0'){
        tam++;
    }

    printf("A palavra ao contrario: ");
    for (int i = tam; i >= 0; i--){
        printf("%c", palavra[i]); // pq char ?
    }
        
        
}