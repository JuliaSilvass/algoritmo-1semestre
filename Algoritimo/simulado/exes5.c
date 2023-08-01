#include <stdio.h>
int main() {
    int i = 0, j = 250;
    while (i <= 250) {
        i = i+1;
        j = j-1;
    }
    printf("%d %d", i, j);
}