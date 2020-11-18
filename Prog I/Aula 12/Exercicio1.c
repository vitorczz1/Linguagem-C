//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <stdlib.h> //Biblioteca para alocacao de memoria

int grau;
float* vet; //Float e um ponteiro para vet  
float x;
float x1=1;
float resultado;

void coeficiente() //Funcao coeficiente
{
 int i;
 vet = (float*)malloc(grau*sizeof(float)); //vet alocado dinamicamente

 for(i=0;i<grau+1;i++){ //conta de 0 ate grau + 1
  scanf("%f",&vet[i]); //Armazena o valor em vet[posicao i]
 }
}

void calculo() //Funcao calculo
{
 int i;
 for (i=0;i <= grau+1;i++){ //conta de 0 ate grau + 1
  resultado = resultado + vet[i] * x1; //resultado = result + vet[posicao i] * valor inicial 1 
   x1 = x1 * x; //Valor inicial 1 = 1 * x
  }  
 printf("%.2f \n",resultado); //Imprime o resultado
}
//x3 + x2 + x1² = resul

int main() { //Funcao MAIN

 scanf("%d",&grau); //Guarda o valor de grau

coeficiente(); //Chama a funcao coeficiente

 scanf("%f",&x); //Guarda o valor de x

calculo(); //Chama a funcao calculo

return 0;
}
