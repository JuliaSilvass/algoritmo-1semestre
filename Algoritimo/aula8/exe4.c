/*Faça um algoritmo que leia uma palavra de no máximo 15 caracteres e
que escreva na tela se a palavra digitada é ou não é um palíndromo.*/
#include <stdio.h>
int main(){
    char palavra [15];
    int tam = 0;

    printf("Digite uma palavra: \n");
    scanf("%s", palavra); 

    while (palavra[tam] != '\0'){
        tam++;
    }

    // int i = 0, j = tam-1;
	// while (i<=tam/2) {
	// 	printf("Comparando %c com %c.\n", palavra[i], palavra[j]); 
	// 	if (palavra[i] != palavra[j]) {
	// 		printf("Não é.");
	// 		return 0; // fecha o programa
	// 	}
	// 	i++;
	// 	j--;
	// }
	// printf("É palíndromo.");
    
    
}