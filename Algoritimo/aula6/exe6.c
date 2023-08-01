#include <stdio.h>
int main (){
    int a, m, d; 

    printf("Digite o ano: ");
    scanf("%d", &a);
	
    if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0){
        for ( m = 1; m < 13; m++){
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 9 || m == 11){
                for ( d = 1; d < 32; d++){
                    printf("%d/%d/%d \n", d, m, a); 
                }
            } else if (m == 4 || m == 6 || m ==  8 || m == 10 || m == 12){
                for (d = 1; d < 31; d++){
                    printf("%d/%d/%d \n", d, m, a); 
                }
            } else {
                for ( d = 1; d < 30; d++){
                    printf("%d/%d/%d \n", d, m, a); 
                }
            }
        }
    } else {
        for ( m = 1; m < 13; m++){
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 9 || m == 11){
                for ( d = 1; d < 32; d++){
                    printf("%d/%d/%d \n", d, m, a); 
                }
            } else if (m == 4 || m == 6 || m ==  8 || m == 10 || m == 12){
                for (d = 1; d < 31; d++){
                    printf("%d/%d/%d \n", d, m, a); 
                }
            } else {
                for ( d = 1; d < 29; d++){
                    printf("%d/%d/%d \n", d, m, a); 
                }
            }
            
        }
        
    }
    
    
    
}