//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>

int main(){
float d;

struct Ponto{
  float x1;
  float x2;
  float y1;
  float y2;
} c1;

scanf("%f %f",&c1.x1,&c1.x2);
scanf("%f %f",&c1.y1,&c1.y2);

d = (((c1.x2 - c1.x1) * (c1.x2 - c1.x1)) + ((c1.y2 - c1.y1) * (c1.y2 - c1.y1)));

printf("%f\n",d);




//if(resulpontox = resulpontoy){
//printf("os pontos sao iguais");
//}
//else{
//printf("os pontos nao sao iguais");
//}

return 0;
}

