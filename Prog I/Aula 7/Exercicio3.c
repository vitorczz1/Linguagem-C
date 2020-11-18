//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#define N 20
#include <stdio.h>
int main(){
  int m1[N][N];
  int m2[N][N];
  int m3[N][N];
  int i,c,NUM_LIN1,NUM_COL2,NUM_LIN2,NUM_COL1,k,c2,i1,c1;
  
 
  scanf("%d %d",&NUM_LIN1,&NUM_COL1);  //Dimensões 1

  scanf("%d %d",&NUM_LIN2,&NUM_COL2);  //Dimensões 2
  

  for (i=0;i< NUM_LIN1;i++)           //Dados 1
     for(c=0;c< NUM_COL1;c++)
       scanf("%d",&m1[i][c]);
       
   for(i=0;i< NUM_LIN2;i++)           //Dados2
     for(c=0;c< NUM_COL2;c++)
   scanf("%d",&m2[i][c]);

 printf("\n");
   
 if ((NUM_LIN1 == NUM_COL2) && (NUM_COL1 == NUM_LIN2)){ //Se linhas(matriz 1 = matriz 2) e colunas(matriz 1 = matriz 2)

   for (i1=0; i1 < NUM_LIN1; i1++){
     for  (c2=0; c2 < NUM_COL2; c2++){
       k=0;          
       for(c1=0;c1 < NUM_COL1; c1++){
           k = k + (m1[i1][c1] * m2[c1][c2]);  //Multiplica m1[linha 1][coluna 1] * m2[coluna 1][coluna 2]
                    m3[i1][c2] = k;           //m3 = [linha 1][coluna 2] 
    }          
  }
}
   for (i=0;i < NUM_LIN1;i++){
     for(c=0;c < NUM_COL2;c++)
      printf("%d ", m3[i][c]); //Imprime o resultado
        printf("\n");
   }
}
  else{                                     //Senão
     printf("As dimensoes das duas matrizes nao permitem a multiplicacao \n"); //Não é possível multiplicar
      }

	return 0;
}

