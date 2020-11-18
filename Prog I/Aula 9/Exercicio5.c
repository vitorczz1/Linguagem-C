//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#define N 20

int main(){
float i,imc;

struct corpo{ 
  float altura;
  float peso;
  char nome[N];
} dados;

scanf("%f",&dados.altura);
scanf("%f",&dados.peso);
scanf("%s", dados.nome);

i = dados.altura * dados.altura;
imc = dados.peso / i;

printf("%.3f\n",imc);

return 0;
}

