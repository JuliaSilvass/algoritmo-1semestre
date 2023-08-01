#include <stdio.h>
int main(){
    int idade;
    char sexo;

    printf("Digite o sexo (M/F): \n");
    scanf("%c", &sexo); 
    printf("Digite a idade: \n");
    scanf("%d", &idade);


    if (sexo == 'M' && idade >= 65){
        printf("PODE SE APOSENTAR \n");
    } else if (sexo == 'F' && idade >= 60 ){
        printf("PODE SE APOSENTAR \n");
    } else if (sexo != 'M' && sexo != 'F'){
        printf("SEXO INVALIDO");
    } else {
        printf("NAO PODE SE APOSENTAR \n");
    }
    
    return 0;
}