#include <stdio.h>
int main (){
   int troco, m1, m50, m25, m10, m5; 

   printf("Qual o troco?");
   scanf("%d",&troco);

    m1 = troco/100;
    troco = troco % 100;

    m50 = troco/50;
    troco = troco % 50;

    m25 = troco/25;
    troco = troco % 25; 
     
    m10 = troco/10;
    troco = troco % 10;

    m5 = troco/5;
    troco = troco % 5;

    printf("moedas de 1 real: %d \n", m1);
    printf("moedas de 50 centavos: %d \n", m50);
    printf("moedas de 25 centavos: %d \n", m25);
    printf("moedas de 10 centavos %d \n", m10);
    printf("moedas de 5 centavos: %d \n", m5);

    return 0;
}