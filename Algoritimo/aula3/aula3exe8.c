#include <stdio.h>
int main (){
    double dia, per, area;
    printf ("Qual o diâmetro da circunferência: \n");
    scanf ("%lf", &dia);

    per = 2*3.14*(dia/2);
    area = 3.14*(dia/2)*(dia/2);

    printf ("O perimetro e: %.2lf \n", per);
    printf ("A area e: %.2lf \n", area);
    
    return 0;
}