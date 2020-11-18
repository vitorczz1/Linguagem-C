//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
 char caractere;
 char i;

printf("\nDigite um caractere\n");
scanf("%c", &caractere);

if (caractere >= "a") && (caractere <= "z")
 i=caractere - 32;

printf("%c",i);

return 0;
}
