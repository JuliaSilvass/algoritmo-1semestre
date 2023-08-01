#include <stdio.h>
int main(){
    // \033[2J limpa a tela
	// \033[1;1H move o cursor para o topo
	printf("\033[2J\033[1;1H");
    
    int a, b; 

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if ((a%2 == 0) && (b%2 == 0)){
        printf("SAO PARES");
    } else {
        printf("NAO SAO PARES");
    }

    return 0;
}