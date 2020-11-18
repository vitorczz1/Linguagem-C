//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>

int main(){

struct Ponto{ 
  int supesquerdo;
  int supdireito;
  int infesquerdo;
  int infdireito;
} ponto;

struct Ponto ponto1;

scanf("%d %d",&ponto.supesquerdo,&ponto.supdireito); //Primeiro retângulo
scanf("%d %d",&ponto.infesquerdo,&ponto.infdireito);

scanf("%d %d",&ponto1.supesquerdo,&ponto1.supdireito); //Segundo retângulo
scanf("%d %d",&ponto1.infesquerdo,&ponto1.infdireito);

if((ponto.supesquerdo <= ponto1.supesquerdo) && (ponto.supdireito <= ponto1.supdireito) 
  && (ponto1.infesquerdo  <= ponto.infesquerdo) && (ponto1.infdireito <= ponto.infdireito)){
printf("o segundo retangulo esta contido no primeiro\n");
}
else{
printf("o segundo retangulo nao esta contido no primeiro\n");
}

return 0;
}


