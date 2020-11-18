//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main() {
int i,acimamedia;
float notas[30],media;
acimamedia=0;

printf("Digite 30 notas: \n");
for(i=0;i < 30;i++)
scanf("%f",&notas[i]);

 media = (notas[i]) / i;
 
for (i=0;i < 30;i++){
if (notas[i] >= 6)
   acimamedia++;
}

printf("A media dos %d alunos foi %.1f,os acima da media foram %d\n",i,media,acimamedia);


return 0;
}

