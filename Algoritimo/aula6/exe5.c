#include <stdio.h> 
int main() {
    for (int a = 1900; a < 2024; a++){
        if(a % 400 == 0 || a % 4 == 0 && a % 100 != 0 ){
            printf("%d \t", a);
        }
    }
}