//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#define N 30

int menor,maior,tamanho_vetor,i; //Variaveis globais

//MAIOR VALOR
void procmaior(int vetor[tamanho_vetor]) //Procedimento maior
{
 int i;
 maior = 0;
 for(i=0; i<tamanho_vetor ; i++){    //Conta de 0 ate
   if(vetor[i] > maior){ //Se vetor[i] > maiorvalor
    maior = vetor[i];    //vetor = valor do maior
  } 
 }
}

//MENOR VALOR
void procmenor (int vetor[tamanho_vetor]) //Procedimento menor 
{  
 int i;
 menor = 10000;
 for(i=0; i<tamanho_vetor ; i++){    //Conta de 0 ate
   if(vetor[i] < menor){ //Se vetor[i] < menorvalor
    menor = vetor[i];    //vetor = valor do menor 
  }
 }
}


int main(){

 scanf("%d",&tamanho_vetor); //Guarda o tamanho do vetor

int vet[tamanho_vetor];  //posicao no vetor vet = tamanho do vetor

 for(i=0;i<tamanho_vetor;i++){ //Conta de 0 ate o tamanho do vetor
 scanf("%d",&vet[i]); //Guarda valor no vetor vet do teclado
}

procmaior(vet); //Chama o procedimento maior
procmenor(vet); //Chama o procedimento menor

printf("maior valor: %d \n",maior);  //Imprime o maior valor
printf("menor valor: %d \n",menor);  //Imprime o menor valor

return 0;

}