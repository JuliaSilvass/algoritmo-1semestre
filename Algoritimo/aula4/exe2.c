#include <stdio.h>

int main () {
    printf("Olá mundo! \n");
    double n1, n2, n3, media; 
    	
    	printf("digite a primeira nota: ");
    scanf("%lf", &n1);
    	printf("digite a segunda nota: ");
    scanf("%lf", &n2);
    	printf("digite a terceira nota: ");
    scanf("%lf", &n3);

    if (n1 ==0 ) {
        media = 0;
        printf("A média do condenado é: %lf", media);
   	    printf("\n");
        return 0;
    }else if (n2 == 0) {
        media = 0;
        printf("A média do condenado é: %lf", media);
   	    printf("\n");
        return 0;
    }else if (n3 == 0) { 
        media = 0;
        printf("A média do condenado é: %lf", media);
   	    printf("\n");
        return 0;
    }

    if (n1 <0 && n1 >10){
        printf("ERRO na nota 1! \n");
        return 0;
    }else if (n2 < 0 && n2 >10){
        printf("ERRO na nota 2! \n");
        return 0;
    }else if (n3 < 0 && n3 >10){
        printf("ERRO na nota 3! \n");
        return 0;
    } else {
        media = 3/((1/n1)+(1/n2)+(1/n3));
        printf("A média do condenado é: %lf", media);
        printf("\n");
        return 0;
    }
}