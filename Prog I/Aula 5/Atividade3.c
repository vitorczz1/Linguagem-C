//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main() {
float notas[20],leitura;
int i,x;

for (i=0;i < 20;i++)   {
scanf("%f",&notas[i]);  //Espera 20 Notas
}

i=0;

while ((notas[i] >= 0.0) && (notas[i] <= 10.0)){ 

scanf("%f",&leitura); //Espera a leitura do teclado


if (leitura<0.0){ //Se leitura negativa
 break;           //Pare
}

x=0;

for (i=0;i<20;i++){
if (leitura == notas[i]) //Se leitura = nota digitada
    x=1;                 //Set x=1
}

i=0;

if (x == 1)        //Se x=1
printf("existe\n");  //Printa existe no vetor
else               //Senão
printf("nao existe\n");  //Printa nao existe no vetor

}

return 0;
}
