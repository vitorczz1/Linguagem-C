#include <stdio.h>

int main(){
float c,f;  

 
printf("Digite a temperatura em graus °C\n");
 scanf("%.2f",&c);

printf("A temperatura digitada em graus °F é: \n");
 f = c * 1.8 + 32; 
printf("%.2f \n", f);

return 0;

}

