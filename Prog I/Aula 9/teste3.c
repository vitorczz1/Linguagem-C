//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <string.h>

int main(){

struct livro{
  char livro[6];
  char titulo[15]; //string
  char autor[15];
  double preco;
} ;

struct livro bib[50];

strcpy(bib[0].livro,"Livro");
strcpy(bib[0].titulo,"Iracema");
strcpy(bib[0].autor,"José De Alencar");
bib[0].preco = 9.99;

bib[1] = bib[0];

printf("%s ",bib[1].livro);
printf("%s de ",bib[1].titulo);
printf("%s\n",bib[1].autor);
printf("R$ %.2f\n",bib[0].preco);

return 0;
}

