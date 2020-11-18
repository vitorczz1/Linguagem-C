//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main() {
int num;
long resposta;
while(1) {

printf("Digite o numero: ");
scanf("%d", &num);
resposta = 1;
while(num > 1)
  resposta *= num--;
printf("O fatorial eh: %ld\n", resposta);
}
return 0;
 }
