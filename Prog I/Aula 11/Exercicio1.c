//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <math.h>

void aritmetica(float x, float y)
{
 float r;
 r = (x+y)/2;
 printf("%.3f \n",r);
}

void geometrica(float x, float y)
{
 float r1;
 r1= sqrt(x*y);
 printf("%.3f \n",r1);
}

int main(){
float x,y;
char z;

scanf("%f %f %c",&x,&y,&z);


if (z = 'A'){
aritmetica(x,y);
}

else if (z = 'B'){
geometrica(x,y);
}


return 0;
}


