//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main() {
char ch;

printf("Digite um caractere: \n");
scanf("%c", &ch);
while ((ch >= 'a') && (ch <='z' )){
      printf("O valor ASCII do '%c' é: %d\n",ch, ch);
      if (ch == '#');{
         break;
}
}
return 0;
 }
