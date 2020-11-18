//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <math.h>

void veta(int A[10]) //Procedimento 
{
 int i;
 for(i=0;i < 10;i++){ //Conta de 0 ate 10
 scanf("%d",&A[i]); //Guarda valores do teclado no vetor A
 }
}

void vetb(int A[10],int B[10]) //Procedimento
{
 int i;
 for(i=0;i < 10;i++){  //Conta de 0 ate 10
 B[i] = pow(A[i],3); //Armazena o cubo do vetor A no vetor B
 }
 for(i=0;i < 10;i++){  //Conta de 0 ate 10
 printf("%d \n",B[i]); //printa o vetor B 
 }
}

int main(){
int A[10];
int B[10];

veta(A); //Chama a funcao veta

vetb(A,B); //Chama a funcao vetb

return 0;
}
