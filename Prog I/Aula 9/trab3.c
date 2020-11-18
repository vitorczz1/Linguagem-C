//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#define N 25

int main(){
int numcidades,cidadeinicial,cidadefinal,i,j,menorvalor,valor,cidinicial;
int matrizcidade[N][N];
int resultado = 0;
int mesmacidade = 0;
int cidadesvisitadas = 1;


    scanf("%d", &numcidades);

int trajeto[numcidades];
  
  for (i=0;i < numcidades;i++){
  	for (j=0;j < numcidades;j++){
    scanf("%d", &matrizcidade[i][j]);
 }
}
    scanf("%d", &cidadeinicial);
    scanf("%d", &cidadefinal);

cidinicial=cidadeinicial;

while(cidadeinicial != cidadefinal){     //Se cidadeinicial ≠ cidadefinal
      valor=5000;
     for(i=0;i < numcidades;i++){       //Percorre linha
	if((matrizcidade[i][cidadeinicial] < valor) && (matrizcidade[i][cidadeinicial] != mesmacidade)) {   //Se matriz < menorvalor 
	valor = matrizcidade[i][cidadeinicial];  //Encontra o menorvalor
        menorvalor = i;           
 }
}
trajeto[cidadesvisitadas] = menorvalor;
cidadeinicial = menorvalor;  

resultado = resultado + menorvalor; 
cidadesvisitadas++;
}

printf("Menor distancia gulosa entre os nos %d e %d::%d\n",cidinicial,cidfinal,resultado);

 printf("Caminho:: ");
 trajeto[0] = cidinicial;
for(j=0;j < numcidades;j++){
  printf("%d->",trajeto[j]);
}
  printf("%d\n",cidadefinal);

return 0;
}
