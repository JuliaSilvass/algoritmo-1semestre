//m1: Imprimir a tabuada da adição de um número fornecido pelo usuário (por exemplo, a tabuada do 5).
#include <stdio.h> 
int main (){
    int t; 
    
    printf("Digite o numero da tabuada: ");
    scanf("%d", &t);

    for (int i = 0; i <=9; i++){
        printf("%d + %d = %d \n", i, t, i+t);
    }
}