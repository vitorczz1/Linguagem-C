//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
 int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
 int contpar = 0;
 int contimpar = 0;


printf("Digite 10 números inteiros: \n");
scanf("%d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

if (n1 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n2 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n3 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n4 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n5 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n6 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n7 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n8 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n9 % 2 == 0)
    contpar++;
else 
   contimpar++;

if (n10 % 2 == 0)
    contpar++;
else 
   contimpar++;
   
printf("%d são pares, e %d são ímpares\n",contpar,contimpar);

return 0;
}
