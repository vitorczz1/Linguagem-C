//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>  //Biblioteca de Entrada/Saida
#include <stdlib.h> //Biblioteca para alocacao de memoria
#include <string.h> //Biblioteca para operacao de strings
#define N 50

int main() { //Funcao MAIN
int n,i;
float media[N];
int* vet; //Ponteiro de um  
int c;

struct aluno{ //Registro aluno
 char nome[100];
 int ra;
 float notaP1;
 float notaP2;
} alun[40];

scanf("%d",&n); //Guarda o valor de alunos

 vet = (int*)malloc(n*sizeof(int)); //Aloca o vetor dinamicamente

for(i=0;i < n;i++){
 
 scanf("%s",alun[i].nome);
 while ((c = getchar()) != '\n' && (c != EOF)){}

 scanf("%d %f %f",&alun[i].ra,&alun[i].notaP1,&alun[i].notaP2);

 media[i] = (alun[i].notaP1 + alun[i].notaP2) / 2; 
  vet[i] = media[i];
}

 for(i=0;i < n;i++){
 printf("%d %s \t %.2f \n",alun[i].ra,alun[i].nome, media[i]);
}

return 0;
}
