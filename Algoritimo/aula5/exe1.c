#include <stdio.h>
#include <math.h>
int main (){
    double a, b, c, del, x1, x2, x;
     
    printf("Digite o 'a' da baskaha: ");
    scanf("%lf", &a);
    printf("Digite o 'b' da baskaha: ");
    scanf("%lf", &b);
    printf("Digite o 'c' da baskaha: ");
    scanf("%lf", &c);
    
    del = (b*b) - (4*a*c);

    if (del == 0){
        x  = -b / (2*a);
        printf("X = %lf \n", x);
    } else if (del > 0) {
        x1 = (-b + sqrt(del))/2*a;
        x2 = (-b - sqrt(del))/2*a;
        
        printf("X1 = %lf \n", x1);
        printf("X2 = %lf \n", x2);
    } else {
        printf("NAO HA RESPOSTAS \n");
    }
    
}