#include <stdio.h>
int main() {
    int i = 0, j = 0;
    while (i < 10 && j < 5){   
        i = i + 1;
        j = j + 1;
    }
    printf("%d", i+j);
    
}