//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
int faltas[10],i;
float notas[10],media;

printf("Digite as faltas: \n");
for (i=0;i<10;i++){
scanf("%d",&faltas[i]);
}
printf("Digite as notas: \n");
for (i=0;i<10;i++){
scanf("%f",&notas[i]);
}

media = notas[i] / 10; 

if ((media >= 6) && (faltas <= 4))
printf("Aprovado\n");

else

printf("Reprovado\n");

return 0;
}
