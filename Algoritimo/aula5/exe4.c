#include <stdio.h>
int main(){
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (((ano % 4) == 0) && ((ano % 100) == 0) && ((ano % 400) == 0)){
        if ( mes == 2) {
            if (dia >= 1 && dia <= 29){
                if (dia >= 1 && dia <= 9){
                    printf("0%d, 0%d, %d", dia, mes, ano);
                } else{
                    printf("%d, 0%d, %d", dia, mes, ano);
                }
            } else {
                printf("DATA INVALIDA \n");
            }
        } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 9 || mes == 11){
            if (dia >= 1 && dia <= 31){
                if ((dia >= 1 && dia <= 9) || (mes >= 1 && mes <= 9)){
                    printf("0%d, 0%d, %d", dia, mes, ano);
                } else {
                    printf("%d, 0%d, %d", dia, mes, ano);
                }
            } else{
                printf("DATA INVALIDA \n");
            }   
        } else if (mes == 4 || mes == 6 || mes ==  8 || mes == 10 || mes == 12) {
            if (dia >= 1 && dia <=30){
                if ((dia >= 1 && dia <= 9) || (mes >= 1 && mes <= 9)){
                    printf("0%d, 0%d, %d", dia, mes, ano);
                } else {
                    printf("%d, 0%d, %d", dia, mes, ano);
                }
            } else {
                printf("DATA INVALIDA \n");
            }
        } else {
            printf("DATA INVALIDA \n");
        }
    } else {
        if (mes == 2){
            if (dia >= 1 && dia <= 28){
                if (dia >= 1 && dia <= 9){
                    printf("0%d, 0%d, %d", dia, mes, ano);
                } else{
                    printf("%d, 0%d, %d", dia, mes, ano);
                }
            } else {
                printf("DATA INVALIDA \n");
            }
        } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 9 || mes == 11){
            if (dia >= 1 && dia <= 31){
                if ((dia >= 1 && dia <= 9) || (mes >= 1 && mes <= 9)){
                    printf("0%d, 0%d, %d", dia, mes, ano);
                } else {
                    printf("%d, 0%d, %d", dia, mes, ano);
                }
            } else{
                printf("DATA INVALIDA \n");
            }   
        } else if (mes == 4 || mes == 6 || mes ==  8 || mes == 10 || mes == 12) {
            if (dia >= 1 && dia <=30){
                if ((dia >= 1 && dia <= 9) || (mes >= 1 && mes <= 9)){
                    printf("0%d, 0%d, %d", dia, mes, ano);
                } else {
                    printf("%d, 0%d, %d", dia, mes, ano);
                }
            } else {
                printf("DATA INVALIDA \n");
            }
        } else {
            printf("DATA INVALIDA \n");
        }
    }

    return 0;
}