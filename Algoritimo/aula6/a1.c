//a1: Verificar se um número fornecido pelo usuário é primo.
#include <stdio.h> 
int main(){
    int n, primo = 1;
    printf("digite um numero para sabre se e primo: ");
    scanf("%d", &n);

    if (n < 1){
        printf("nao e primo");
        return 0; // encerra o programa.
    }
    
    for (int i = 2; i < n; i++){
        if (n%i == 0){
            primo = 0;
            // printf("encontrado um divisor: "); || possivel verificar quais os divisores se não usar o break, no caso o pq de o numero não ser primo
            break; // aborta o laço de repetição
            //printf("nao e primo");               *
            //return 0;         **
        }
    }   

    if (primo == 1){
        printf("e primo");
    } else {
        printf(" nao e primo");
    }
     //prinf ("e primo")  *,** , é uma possibilidade de fazer. 
    
}