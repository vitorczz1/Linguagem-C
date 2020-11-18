//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#define N 20
#include <stdio.h>
int main(){
  int m[N][N],m2[N][N];
  int i,c,NUM_LIN,NUM_COL;
  
  scanf("%d %d",&NUM_LIN,&NUM_COL); //Dimensões

  for (i=0;i< NUM_LIN;i++)       //Dados
     for(c=0;c< NUM_COL;c++)
       scanf("%d",&m[i][c]);
   
   //Transposição
   
    for (i=0;i < NUM_LIN; i++)
     for(c=0;c < NUM_COL;c++)  
       m2[c][i]=m[i][c];       //Troca coluna por linha


    for (i=0;i < NUM_COL; i++){
     for(c=0;c < NUM_LIN;c++)
      printf("%d ", m2[i][c]); //Imprime a matriz transposta
        printf("\n");
   }
	return 0;
}
