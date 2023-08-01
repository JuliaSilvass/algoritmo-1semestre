#include <stdio.h>
int main(){
    int a, b, c;
    
    printf("Digite tres numeros: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > 0 || b > 0 || c > 0){
        printf("UM OU MAIS DELES E POSITIVO \n");
    } else {
        printf(" NENHUM DELES É POSITIVO \n");
    }
}