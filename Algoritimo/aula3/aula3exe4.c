#include <stdio.h>
int main(){
	printf("Olá! \n");
    int anos, meses, dias; 
    	printf("Qual a sua idade em dias? ");
    scanf("%d", &dias);
    
    anos = dias/365;
    dias = dias%365;
    
    meses = dias/30;
    dias = dias%30;
    
    
   	printf("A idade em anos é: %d", anos);
   	printf("\n");
   	printf("%d", dias);
   	printf ("A idade em meses é: %d", meses);
   	printf("\n");
   	printf ("A idade em dias é: %d", dias);
   	printf("\n");
    
    }
