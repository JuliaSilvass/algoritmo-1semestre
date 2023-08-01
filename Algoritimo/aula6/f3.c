//f3: Calcular o produto dos números ímpares de 1 a 20.
#include <stdio.h> 
int main(){
    int produto = 1;
    for (int i = 1; i < 21; i=i+2){
        produto = produto * i;
    }
    printf("%d", produto);
}