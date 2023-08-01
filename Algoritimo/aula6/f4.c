//f4: Ler 10 números do usuário e imprimir o maior valor, usando laço de repetição.
#include <stdio.h>
#include <limits.h> // Guarda o menor numero inteiro possivel (habilita o INT_MIN)
int main(){
    int num; 
    int lido = INT_MIN;
    for (int i = 0; i < 10; i++){
        scanf("%d", &num); 
        if (num > lido){
            lido = num;       
        }else {
            lido = lido;
        }
        //Acho que não necessidade do else...
    }
    printf("%d \n", lido);



}