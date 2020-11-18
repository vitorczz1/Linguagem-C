//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main() {
 int n,s,r;
 long int nm;
 float nfatorial1,sfatorial2,rfatorial3;
printf("Digite o valor de N e S:\n");
scanf("%d %d",&n,&s);

if ((n>0) && (s>0)){
for (nfatorial1=1;n>1;n--)
    nfatorial1 = nfatorial1*n;
for (sfatorial2=1;s>1;s--)
    sfatorial2 = sfatorial2*s;
}
else{ 
    printf("Número inválido\n");
}

for (rfatorial3=1;r>1;r = n-s)
    rfatorial3 = rfatorial3*r;

nm = nfatorial1/(sfatorial2*(rfatorial3));


printf("\n%.0f\n",nfatorial1);
printf("\n%.0f\n",sfatorial2);
printf("\n%.0f\n",rfatorial3);
printf("\n%li\n",nm);

return 0;
}
