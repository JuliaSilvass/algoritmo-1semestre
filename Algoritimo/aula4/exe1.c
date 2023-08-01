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

    if ( p1 > 10 || p1 < 0){
        printf ("Primeiro peso incorreto! \n");
        return 0; 
    } else if (p2 > 10 || p1 < 0) {
        printf ("Segundo peso incorreto! \n");
        return 0;
    } else if (n1 < 0 || n1 > 10){
        printf ("Primeira nota incorreta! \n");
        return 0;
    } else if (n2 < 0 || n2 > 10){
        printf ("Segunda nota incorreta! \n");
        return 0;
    } else if (p1 + p2 != 10){
        printf ("ERRO NO PESO! \n");
        return 0;
    } else {
        (media = ((p1*n1)+(p2*n2))/(p1+p2));
   	printf("A média do condenado é: %lf", media);
   	printf("\n");
        return 0;
    }    
    }
