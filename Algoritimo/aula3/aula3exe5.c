#include <stdio.h>
int main(){
	printf("Olá! \n");
    int elei, vb, vn, vv, r1, r2, r3;
    	printf("Quantos eleitores tem no municipio? \n");
    		scanf("%d", &elei);
    	printf("Quantos votos brancos? \n");
    		scanf("%d", &vb);
    	printf("Quantos votos nulos? \n");
    		scanf("%d", &vn);
    	printf("Quantos votos válidos? \n");
    		scanf("%d", &vv);
    	
    	r1 = (vb*100)/elei;
    	r2 = (vn*100)/elei;
    	r3 = (vv*100)/elei;
    	
    
   	printf("O percentual de votos brancos: %d", r1);
   	printf("\n");
   	printf ("O percentual de votos nulos: %d", r2);
   	printf("\n");
   	printf ("O percentual de votos válidos: %d", r3);
   	printf("\n");
    
    }
