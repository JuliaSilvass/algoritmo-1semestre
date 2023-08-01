#include <stdio.h> 

#include <windows.h>
int main(){
  // Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();  

  // Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);

    // Váriaveis
      char cpf [14];
      int soma1 = 0;
      int soma2 = 0;
      int DV1 = 0;
      int DV2 = 0;
      
      printf("Digite seu CPF no fomato (xxx.xxx.xxx-xx): ");
      
      for(int i = 0; i < 14; i++ ) {
        scanf("%c", &cpf [i]);
      }

      // Verificação de formato com dois pontos e traçoe somente numeros

      if (cpf[3] == 46 && cpf[7] == 46 && cpf[11] == 45){
        for (int i = 0; i < 3; i++){
          
          if (cpf[i] != 48 && cpf [i] != 49 && cpf [i] != 50 && cpf [i] != 51 && cpf [i] != 52 && cpf [i] != 53 && cpf [i] != 54 && cpf [i] != 55 && cpf [i] != 56 && cpf [i] != 57){
            printf("O CPF não está no formato correto! \n");
            return 0;
          }
        }

        for (int i = 4; i < 7; i++){
          if (cpf[i] != 48 && cpf [i] != 49 && cpf [i] != 50 && cpf [i] != 51 && cpf [i] != 52 && cpf [i] != 53 && cpf [i] != 54 && cpf [i] != 55 && cpf [i] != 56 && cpf [i] != 57){
            printf("O CPF não está no formato correto! \n");
            return 0;
          }
        }

        for (int i = 8; i < 11; i++){
          if (cpf[i] != 48 && cpf [i] != 49 && cpf [i] != 50 && cpf [i] != 51 && cpf [i] != 52 && cpf [i] != 53 && cpf [i] != 54 && cpf [i] != 55 && cpf [i] != 56 && cpf [i] != 57){
            printf("O CPF não está no formato correto! \n");
            return 0;
          }
        }

        for (int i = 12; i < 14; i++){
          if (cpf[i] != 48 && cpf [i] != 49 && cpf [i] != 50 && cpf [i] != 51 && cpf [i] != 52 && cpf [i] != 53 && cpf [i] != 54 && cpf [i] != 55 && cpf [i] != 56 && cpf [i] != 57){
            printf("O CPF não está no formato correto! \n");
            return 0;
          }
        }
      } else {
        printf("O CPF não está no formato correto! \n");
        return 0;
      }

      
    // Calculo do primeiro DV
    //calculo dos 3 primeiros numeros
      for (int i = 1; i <= 3; i++){
        soma1 = soma1 + (cpf[i-1] - 48) * i;
      }

    // calculo dos outros 3 numeros
      for (int i = 4; i <= 6; i++){
        soma1 = soma1 + (cpf[i] - 48) * i;
      }

    // calculo dos 3 ultimos numeros
      for (int i = 7; i <= 9; i++){
        soma1 = soma1 + (cpf[i+1] - 48) * i;
      }

    // Resto do primeiro DV
      DV1 = soma1 % 11;


    // Calculo do segundo DV
    //calculo dos 3 primeiros numeros
      for (int i = 0; i <= 2; i++){
        soma2 = soma2 + (cpf[i] - 48) * i;
      }

    // calculo dos outros 3 numeros
      for (int i = 3; i <= 5; i++){
        soma2 = soma2 + (cpf[i+1] - 48) * i;
      }

    // calculo dos 3 ultimos numeros
      for (int i = 6; i <= 8; i++){
        soma2 = soma2 + (cpf[i+2] - 48) * i;
      }
  
    //calculo com o 1 DV
      soma2 = soma2 + (DV1*9);

    // Resto do segundo DV
      DV2 = soma2 % 11;

    if ((DV1 + 48) == cpf[12] && (DV2 + 48) == cpf[13]){
      printf("O CPF está no formato permitido e também é válido.");
    } else {
      printf("O CPF está no formato permitido, mas é inválido.");
      return 0;
    }

    return 0;


  // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);
}