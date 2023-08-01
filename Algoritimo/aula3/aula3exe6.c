#include <stdio.h>
int main (){
    double cel, fah, kel;
    printf ("Digite a temperatura em Celsius: \n");
    scanf ("%lf", &cel);

    fah = (cel * 1.8) + 32;

    kel = cel + 273.15;

    printf ("A temperatura em Fahrenheit é: %.2lf \n", fah);
    printf ("A teperatura em Kelvin é: %.2lf \n", kel);
}