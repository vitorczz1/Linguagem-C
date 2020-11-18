//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <math.h>

int main(){
float n1,n2;
char l;

float media(float n1,float n2)
{
 return (n1+n2)/2;
}

float mediageo(float n1,float n2)
{
 float mediageometrica = sqrt(n1*n2);
 return mediageometrica;
}

scanf("%c",&l);
scanf("%f %f",&n1,&n2);

if (l == 'A'){
 printf("%.3f\n",media(n1,n2));
}

if (l == 'B'){
 printf("%.3f\n",mediageo(n1,n2));
}

//n1-n2 e tira raiz

return 0;
}

