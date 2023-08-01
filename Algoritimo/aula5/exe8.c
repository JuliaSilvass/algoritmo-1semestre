#include <stdio.h>
int main(){
    int idade;
    double alt;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%lf", &alt);

    if (idade >= 18 || alt >= 1.70){
        printf("PODE ENTRAR NO BRINQUERDO \n");
    } else {
        printf("NÃO PODE ENTRAR NO BRINQUEDO \n");
    }

    return 0;
}