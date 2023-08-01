#include <stdio.h>
int main() {
    int nota;
    int freq;
    
    printf("Qual é a nota ? ");
    scanf("%d", &nota);
    printf("Qual a frequencia? ");
    scanf("%d", &freq);
    
    int apr_nota = nota >=6;
    int apr_freq = freq >= 75;


    if (apr_nota && apr_freq){
        printf("APROVADO!");        
    } else if (!(apr_nota) && apr_freq){
        printf("REPROVADO POR NOTA!");
    } else if (apr_nota && !(apr_freq)){
        printf("REPROVADO POR FREQUENCIA!");
    } else {
        printf("REPROVADO POR NOTA E FREQUENCIA!");
    }

}