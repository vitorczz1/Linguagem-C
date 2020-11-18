//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int  main(){
int  i,quantvend[10],quantfinal;
float valorunit[10];
double valorfinal;
quantfinal=0;
valorfinal=0;

for  (i=0;i < 10;i++)      //Guardar 10 quantidades de produto
scanf("%d",&quantvend[i]);

for(i=0; i< 10; i++)       //Soma das 10 quantidades
quantfinal=quantfinal + quantvend[i];


for  (i=0;i < 10;i++)     //Guardar 10 valores do produto
scanf("%f",&valorunit[i]);

for  (i=0;i < 10;i++)     //Soma dos 10 valores
valorfinal =  valorfinal + (quantvend[i]*valorunit[i]);

printf("O lucro foi de %.3f e a quantidade de produtos vendidos foi de %d\n",valorfinal,quantfinal);

return 0;
}
