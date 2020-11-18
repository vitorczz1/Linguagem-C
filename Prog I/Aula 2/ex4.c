#include <stdio.h>

int main(){

int i;
float a;
char s;  

printf("Digite sua idade: \n");
 scanf("%d",&i);

printf("Digite sua altura: \n");
scanf("%f",&a);

printf("Digite seu sexo: \n");
scanf("%c",&s);

printf("A pessoa tem %d anos, %f de altura, e do sexo %c  \n", i,a,s); 

return 0;

}

