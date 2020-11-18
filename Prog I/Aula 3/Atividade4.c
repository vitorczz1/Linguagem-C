//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
 int dia, ano, mes;
 char barra;
 scanf("%d %c %d %c %d",&dia,&barra, &mes,&barra,&ano);

  

switch (mes) {
 case 1 :
      printf("\n%d de Janeiro de %d\n", dia, ano);
      break;
case 2 :
      printf("\n%d de Fevereiro de %d\n", dia, ano);
      break;
case 3 :
      printf("\n%d de Março de %d\n", dia, ano);
      break;
case 4 :
      printf("\n%d de Abril de %d\n", dia, ano);
      break;
case 5 :
      printf("\n%d de Maio de %d\n", dia, ano);
      break;
case 6 :
      printf("\n%d de Junho de %d\n", dia, ano);
      break;
case 7 :
      printf("\n%d de Julho de %d\n", dia, ano);
      break;
case 8 :
      printf("\n%d de Agosto de %d\n", dia, ano);
      break;
case 9 :
      printf("\n%d de Setembro de %d\n", dia, ano);
      break;
case 10 :
      printf("\n%d de Outubro de %d\n", dia, ano);
      break;
case 11 :
      printf("\n%d de Novembro de %d\n", dia, ano);
      break;
case 12 :
      printf("\n%d de Dezembro de %d\n", dia, ano);
      break;
default:
printf("\nMes invalido\n");    
}

return 0;
}
