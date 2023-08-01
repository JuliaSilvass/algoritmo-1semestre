#include <stdio.h>
int main (){
    int n1, n2, n3;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: "); 
    scanf("%d", &n3);

    if (n1 < n2){
        if (n1 < n3){
            printf("O %d é o menor numero", n1);
        }
    }
    if (n2 < n3){
        if (n2 < n1){
            printf("o %d é o menor numero", n2);
        }
    }
    if(n3 < n2){
        if (n3 < n1){
            printf("o %d é menor numero", n3);
        }
    }
    
}