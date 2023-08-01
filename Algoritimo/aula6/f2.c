//f2: Imprimir os números múltiplos de 3 e 5 que estão entre 1 e 100.
#include <stdio.h>
int main(){
    int i = 0;
    while (i < 101){
        if (i%3==0 && i%5==0){
            printf("%d \n", i);
        }
        i++;
    }
}