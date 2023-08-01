//m2: Ler números do usuário até que um número negativo seja informado e, em seguida, calcular a soma dos números lidos. Utilizar do-while.
#include <stdio.h>
int main (){
    int num, soma = 0;

    do{
        printf("informe um número: ");
        scanf("%d", &num);
        soma = soma + num; 
    } while (num >= 0);

    soma = soma - num; // isso vai tirar a soma do numero negativo. 
    printf("a soma e: %d", soma);
    
}