//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <string.h>
#define N 81

int main(){
char string1[N];
char string2[N];
int i,j,k; 

  fgets(string1,81,stdin);  //Espera o Teclado

j=strlen(string1);  //Declara j = a quantidade de caracteres

k=j-1;       

for (i=0; i <= j; i++) {    //Conte de 0 até a quant.de caract.
     string2[i] = string1[k] ; //string1 = string2
     k--;            //Decremento de quant.de caract. até 0
}
 
puts(string2); //Imprime string invertida

return 0;
}

