//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#define N 20
#include <stdio.h>
int main(){
  int m[N][N];
  int vetor[N];
  int i,c,k,mult,NUM_LIN,NUM_COL;
  
  scanf("%d %d",&NUM_LIN,&NUM_COL); //Dimensões
  
  for (i=0;i < NUM_LIN;i++)
     for(c=0; c < NUM_COL;c++)
       scanf("%d",&m[i][c]);     //Dados
    
   //k = i * NUM_COL + c;
   //i = k / NUM_COL;
   //c = k % NUM_COL;

      //Transformação

mult = NUM_LIN + NUM_COL;   
k=0;

if (mult != 0){               //Se dimensões ≠ 0
   for(i=0; i < NUM_LIN; i++) {
      for(c=0; c < NUM_COL; c++){
        vetor[k] = m[i][c];     //Atribui o valor de linha e coluna ao vetor     
            k++;  
    }
  }
}
else{
  printf("Não é possível multiplicar");
}

   for(i=0; i < k; i++){
   printf("%d ",vetor[i]);      //Printa o vetor 
}
printf("\n");

	return 0;
}
