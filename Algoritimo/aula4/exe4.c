#include <stdio.h>
int main (){
    int lados;

    printf("Digite a quantidade de lados do polígono: ");
    scanf ("%d", &lados);

    if (lados <= 2) {
        printf("ERRO: lados insuficiente ");
        return 0;
    } else if (lados == 3) {
        printf("É um triângulo! \n");
        return 0;
    } else if (lados == 4) {
        printf("É um quadrilátero! \n");
        return 0;
    } else if (lados == 5) {
        printf("É um pentágono! \n");
        return 0;
    } else if (lados == 6 ) {
        printf ("É um hexágono! \n");
        return 0;
    } else if (lados == 7) {
        printf ("É um heptágono! \n");
        return 0;
    } else if (lados == 8){
        printf ("É um octágono! \n");
        return 0;
    }else if (lados == 9) {
        printf ("É um eneágono! \n");
        return 0;
    }else if (lados == 10) {
        printf ("É um decágono \n");
        return 0;
    }

}