#include <stdio.h>
int main(){
    int A, B, C;

    printf("Qual o primeiro lado do triangulo: ");
    scanf("%d", &A);
    printf("Qual o segundo lado do triangulo: ");
    scanf("%d", &B);
    printf("Qual o terceiro lado do triangulo: ");
    scanf("%d", &C);

    int a = A+B < C;
    int b = A+C < B;
    int c = C+B < A;

    if (a || b || c){
        printf("NAO E TRIANGULO!");
    } else {
        printf("E TRIANGULO!");
    }

    return 0;
}