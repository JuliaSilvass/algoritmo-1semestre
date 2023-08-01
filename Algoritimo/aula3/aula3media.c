#include <stdio.h>
int main(){
	printf("Olá mundo! \n");
    double n1, n2, n3, media; 
    	printf("digite a primeira nota: ");
    scanf("%lf", &n1);
    	printf("digite a segunda nota: ");
    scanf("%lf", &n2);
    	printf("digite a terceira nota: ");
    scanf("%lf", &n3);
    media = (n1+n2+n3)/3;
   	printf("A média do condenado é: %lf", media);
   	printf("\n");
    if (media >=6) {
    	printf ("Aluno aprovado! \n");
    }
    else {
    	printf ("Aluno reprovado! \n");
    }
    
    }
