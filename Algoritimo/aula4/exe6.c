#include <stdio.h>
int main () {
    int n1, n2;

    printf("Informe o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Informe o segundo numero: \n");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("o %d. é o menor numero", n2);
    } else {
        printf("O %d. é o menor numero", n1);
    }
    return 0;
}