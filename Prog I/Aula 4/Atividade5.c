//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main() {
int n,i;
int nump = 0;
int numi = 0;

for (i=0;i<10;i++){ /*A cada*/ 
  scanf("%d", &n); /*Espera o Teclado*/ 
  if (n%2 == 0){ /*Se Módulo do número digitado = o, então*/ 
      nump++;} /*Adiciona mais 1 ao número par*/ 
else {        /*Senão*/ 
      numi++; /*Adiciona mais 1 ao número impar*/ 
}
}
printf("%d pares, %d impares\n",nump, numi);
return 0;
}
