//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
 int a,b;
char operador;


printf("\nDigite a operação: \n");
scanf("%d %c %d", a,operador,b );


switch (operador){
 case 1:
   b = a + b;
   printf("\n%d %c %d\n",a,operador,b);
   break;
 
case 2:
 b = a - b;
printf("\n%d %c %d\n",a,operador,b);
   break;
 
case 3:
 b = a * b;
printf("\n%d %c %d\n",a,operador,b);
   break;
 
case 4:
 b = a / b;
printf("\n%d %c %d\n",a,operador,b);
   break;


default:
 printf("\nNúmero/Operador Inválido\n");
break;
}




return 0;
}
