//f5: Calcular a média de 10 números informados pelo usuário.
#include <stdio.h>
int main() {
    double num;
    double soma = 0;
    for (int i = 1; i <= 10; i++){
        printf("digite o %d numero: ", i);
        scanf("%lf", &num);
        soma = soma + num;
    }
    printf("A media e: %lf", soma/10);
}