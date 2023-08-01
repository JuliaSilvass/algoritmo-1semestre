#include <stdio.h>
#include <unistd.h> //habilita a função sleep ()
int main (){
    int i=0;
    while (i < 51){
        printf("%d\n", i);
        i++;
    }
}