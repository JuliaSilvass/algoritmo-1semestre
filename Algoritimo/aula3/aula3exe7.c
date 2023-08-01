#include <stdio.h>
int main (){
    double cel, fah, kel;
    printf ("Digite a temperatura em Fahrenheit: \n");
    scanf ("%lf", &fah);

    cel = (fah - 32) / 1.8;

    kel = (fah - 32) * 5/9 + 273.15;

    printf ("A temperatura em Celsius é: %.2lf \n", cel);
    printf ("A teperatura em Kelvin é: %.2lf \n", kel);
}