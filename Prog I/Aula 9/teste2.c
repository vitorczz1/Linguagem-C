//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>

int main(){

struct pessoa{
  char nome[15]; //string
  int idade;
} cliente1;

scanf("%s",cliente1.nome);
scanf("%d",cliente1.idade);

printf("%s: %d anos\n",cliente1.nome,cliente1.idade);

return 0;
}

