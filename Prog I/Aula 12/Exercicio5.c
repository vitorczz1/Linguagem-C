//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h> //Biblioteca de Entrada/Saida
#include <stdlib.h> //Biblioteca para alocacao de memoria
#include <string.h> //Biblioteca para operacao de strings

int main(){ //Funcao MAIN
int i,k,n;
float media[30];

typedef struct aluno //Registro Aluno
 {
 char nome[102];
 int ra;
 float notaP1;
 float notaP2;
} alun; //Variavel da estrutura

alun *alu; //alu eh um ponteiro para alun

 scanf("%d", &n); //Guarda o valor de alunos
  getchar(); //Guarda o caractere

   alu = (alun*) malloc(n*sizeof(alun)); //Aloca a estrutura dinamicamente

 for(i = 0; i < n; i++) //Conta de 0 ate valor de alunos 
{
   fgets(alu[i].nome, 102, stdin);
 scanf("%d", &alu[i].ra); //Guarda o valor de RA
   getchar(); //Guarda o caractere
 scanf("%f", &alu[i].notaP1); //Guarda o valor de notaP1
   getchar(); //Guarda o caractere
 scanf("%f", &alu[i].notaP2); //Guarda o valor de NotaP2
   getchar(); //Guarda o caractere

  printf("%d\t", alu[i].ra); //Imprime o RA do aluno

 media[i] = (alu[i].notaP1 + alu[i].notaP2)/2; //Media = (notaP1+notaP2)/2

 for(k = 0; k < strlen(alu[i].nome); k++){ //Conta de 0 ate o numero de letras do nome
  if(alu[i].nome[k] == '\n'){ //Se nome encontrar \n
    alu[i].nome[k] = '\t'; //nome = \t
    break; //Para o looping
 }
}
 
 printf("%s", alu[i].nome); //Imprime o nome do aluno

 printf("%.2f\n", media[i]); //Imprime a media do aluno
 
}
 return 0;
}
