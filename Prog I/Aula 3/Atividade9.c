//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main() {
char barra;
int dia,mes,ano,meses;

barra = '/';
printf("Digite uma data: \n");
scanf("%d %c %d %c %d",&dia,&barra,&mes,&barra,&ano);

if (mes == 1)
   meses = "janeiro";

if (mes == 2)
   meses = "fevereiro";

if (mes == 3)
   meses = "março";

if (mes == 4)
   meses = "abril";

if (mes == 5)
   meses = "maio";

if (mes == 6)
   meses = "junho";

if (mes == 7)
   meses = "julho";

if (mes == 8)
   meses = "agosto";

if (mes == 9)
   meses = "setembro";

if (mes == 10)
   meses = "outubro";

if (mes == 11)
   meses = "novembro";

if (mes == 12)
   meses = "dezembro";


printf("%d de %s de %d\n", dia,meses,ano);


return 0;
}
