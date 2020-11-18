//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <string.h>

int main(){
char string1[20];
char string2[20];
int i,k,j;

scanf("%s",string1);

j= strlen(string1);

k= j - 1;

for(i=0; i <= j ;i++){
  string2[i]= string1[k];
  k--;
}

if (strcmp(string1, string2) == 0){
printf("Esta palavra e um palíndromo: %s ",string1);
}
else{
printf("Esta palavra nao e um palindromo \n");
}

//string2 = string 1 invertida (racificar)
//string1 = (racificar)

return 0;
}
