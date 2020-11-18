#include <stdio.h>
#define N 20
int main(){
int matriz[N][N];
int NUM_LIN,NUM_COL,i,c;

printf("Digite as linhas, e colunas: \n");
scanf("%d %d",&NUM_LIN,&NUM_COL);

printf("Digite os dados: \n");
for (i=0; i < NUM_LIN;i++)
for (c=0; c < NUM_COL;c++)
scanf("%d",&matriz[i][c]);

printf("\n");

for (i=0;i < NUM_LIN;i++){
for (c=0;c < NUM_COL;c++)
printf("%d ",matriz[i][c]);
printf("\n");
}

return 0;
}
