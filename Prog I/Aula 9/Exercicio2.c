//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <math.h>

int main(){
float d,d1;

struct Ponto{ 
  float x1;
  float x2;
  float y1;
  float y2;
} ponto;

scanf("%f %f",&ponto.x1,&ponto.y1);
scanf("%f %f",&ponto.x2,&ponto.y2);

d = sqrt(((ponto.x2 - ponto.x1) * (ponto.x2 - ponto.x1)) + ((ponto.y2 - ponto.y1) * (ponto.y2 - ponto.y1))); //Ponto final - Inicial

d1= d + 0.0000001;

if((d < d1) && (d==0)){
printf("os pontos sao iguais\n");
}
else{
printf("os pontos nao sao iguais\n");
}

return 0;
}

