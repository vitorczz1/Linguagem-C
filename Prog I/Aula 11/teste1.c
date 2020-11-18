//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <math.h>

void vetb(int A[10],int B[10])
{
 int i;
 for(i=0;i < 10;i++){
 B[i] = pow(A[i],3);
 }
 for(i=0;i < 10;i++){
 printf("%d \n",B[i]);
 }
}

int main(){
int i;
int A[10];

for(i=0;i < 10;i++){
scanf("%d",&A[i]);
}

vetb(int A[10],int B[10]);

return 0;
}


