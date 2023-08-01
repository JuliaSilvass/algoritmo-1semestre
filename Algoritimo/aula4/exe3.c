#include <stdio.h>
int main() {
	int troco;
	printf("Informe o troco a ser dado em CENTAVOS: ");
	scanf("%d", &troco);
	
	int m100 = troco / 100;
	troco = troco % 100;
	
	int m50 = troco / 50;
	troco = troco % 50;
	
	int m25 = troco / 25;
	troco = troco % 25;
	
	int m10 = troco / 10;
	troco = troco % 10;
	
	int m5 = troco / 5;
	troco = troco % 5;
	
	printf("MOEDA\tQTD.\n"
	"TESTE");
	if (m100>0) {
		printf("1 real\t%d\n", m100);}
	if (m50> 0){
		printf("50 cent\t%d\n", m50);
	}
	if(m25> 0){
        printf("25 cent\t%d\n", m25);
    }
	if(m10> 0){
        printf("10 cent\t%d\n", m10);
    }
	if (m5> 0){
	printf("5 cent\t%d\n", m5);
	}
}