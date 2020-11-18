//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
int i,j,k;
    
    printf("\n");
for (k=0; k<=1; k++) { /*k=0,1*/
    printf("\n");
    for (i=1;i<5;i++)   /*i=1,2,3,4,5*/
     printf("Tabuada do %2d\t", i+4*k+1);
     printf("\n");
    for (i=1;i<=9;i++) {
     for (j=2+4*k; j<=5+4*k; j++) /* j=6*k, j<=9*k */
    printf("%2d x %-2d\t = %2d\t", j, i ,j*i);
    printf("\n") ;
 }}
return 0;
}
