//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 81

int main(){
char string1[N];
char string2[N];
int i,k,j;

scanf("%s",string1);

j= strlen(string1);        //j = Numero de caracteres da string

k= j - 1;                  //k= Numero de caracteres - 1

  for (i=0; string1[i] >= j; i++) 
  string1[i] = tolower(string1[i]); //Transforma as letras maiusculas em minusculas 

  for(i=0; i <= j ;i++){
  string2[i]= string1[k];   //Transforma as letras maiusculas em minusculas
  k--;
 }

  if (strcmp(string1, string2) == 0){   //Se string 1 == string1 invertida
   puts("Esta palavra e um palindromo"); //É um palindromo
}
 else{                                  //Senão
   puts("Esta palavra nao e um palindromo"); //Não é um palindromo
}

//string2 = string 1 invertida (racificar)
//string1 = (racificar)

return 0;
}

