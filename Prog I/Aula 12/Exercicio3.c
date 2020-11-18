//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <stdlib.h> //Biblioteca para alocacao de memoria

int main(){ //Funcao MAIN

int lin,col,l,c,i;
int cont=0;
int** matriz; //Ponteiro para a matriz 
	
 scanf("%d %d",&lin,&col); //Guarda o valor de linha e coluna
	
   matriz = (int**) malloc(lin*sizeof(int*)); //Aloca a linha
	
 for(i=0; i<lin; i++){ //Conta de 0 ate o valor de linha
  matriz[i] = (int*) malloc(col*sizeof(int));  //Aloca a coluna
}
		
 for(l=0; l<lin; l++){ //Conta de 0 ate o valor de linha
  for(c=0; c<col; c++){ //Conta de 0 ate o valor de coluna
   scanf("%d",&matriz[l][c]); //Armazena o valor na matriz[l][c]
 }
}

//(matriz[0][0] =1  == matriz[0][1] = 2 )
//(matriz[1][0] =1  == matriz[1][1] = 1 )

 for(l=0; l<lin; l++){ //Conta de 0 ate o valor de linha
  for(c=0; c<col; c++){ //Conta de 0 ate o valor de coluna
    if (lin == col){ //Se linha == coluna
    if(matriz[1][0] == matriz[0][1]){ //Se elemento da (linha 1,coluna 0 == linha 0,coluna 1)
      cont++; //Adiciona 1 ao contador
   }
  }
 }
}

 if(cont > 0){ //Se contador > 0
  printf("Eh simetrica \n"); //Imprime Eh Simetrica
}
  else{ //Senao
  printf("Nao eh simetrica \n"); //Imprime Nao eh Simetrica
}

 return 0;
}	

//1 2
//1 1

