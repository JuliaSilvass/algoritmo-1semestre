#include <stdio.h>
int main(){
	printf("Olá! \n");
    int anos, meses, dias, result; 
    	printf("Qual a sua idade em anos? ");
    scanf("%d", &anos);
    	printf("Qual a sua idade em meses? ");
    scanf("%d", &meses);
    	printf("Qual a sua idade em dias? ");
    scanf("%d", &dias);
    result = (anos*365) + (meses*30) + dias;
   	printf("A idade em dias é: %d", result);
   	printf("\n");
    
    }
