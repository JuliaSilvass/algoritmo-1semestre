#include <stdio.h>
int main(){
	printf("Olá mundo! \n");
    double n1, n2, media; 
    int p1, p2;
    	
    	printf("digite a primeira nota: ");
    scanf("%lf", &n1);
    	printf("digite a segunda nota: ");
    scanf("%lf", &n2);
    	printf("digite o primeiro peso: ");
    scanf("%d", &p1);
    	printf("digite o segundo peso: ");
    scanf("%d", &p2);
    media = ((p1*n1)+(p2*n2))/(p1+p2);
   	printf("A média do condenado é: %lf", media);
   	printf("\n");
   	
    if (media >=6) {
    	printf ("Aluno aprovado! \n");
    }
    else {
    	printf ("Aluno reprovado! \n");
    }
    }
