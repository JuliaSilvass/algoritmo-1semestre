#include <stdio.h>
int main () {
    double peso, altura, imc; 

    printf("Informe o seu peso (em kg): ");
    scanf ("%lf", &peso);
    printf("Informe o seu altura (em metros): ");
    scanf ("%lf", &altura);

    imc = peso / (altura * altura) ;

    printf ("Seu IMC é:%lf \n", imc);
    
    if (imc <= 18.5){
        printf  ("Abaixo do peso \n");
    } else if (imc <= 25){
        printf("Peso normal \n");
    } else if (imc <= 30){
        printf ("Sobrepeso \n");
    } else if (imc <= 35){
        printf ("Obesidade grau I \n");
    } else if (imc <= 40){
        printf ("Obesidade grau II \n");
    } else{
        printf ("Obesidade grau III \n");
    }
}