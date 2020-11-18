//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <string.h>

int main(){

typedef struct pessoa{
  char nome[15]; //string
  int idade;
} cliente1;

 cliente1 c1 = {"Cleiton",42};
 cliente1 c2 = c1; 

printf("%s: %d anos\n",c2.nome,c2.idade);



return 0;
}

