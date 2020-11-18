//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#define N 25

int main(){
int numcidades,cidadeinicial,cidadefinal,i,j,menorvalor,cidinicial,cidfinal,cidadeatual,valor,trajeto;
int matrizcidade[N][N];
int resultado = 0;
int mesmacidade = 0;
int cidadesvisitadas = 1 ;
int valor=300;

    scanf("%d", &numcidades);

trajeto[numcidades];
  
  for (i=0;i < numcidades;i++){
  	for (j=0;j < numcidades;j++){
    scanf("%d", &matrizcidade[i][j]);
 }
}
    scanf("%d", &cidadeinicial);
    scanf("%d", &cidadefinal);

cidadeatual=cidadeinicial;
cidinicial=cidadeinicial;   //Primeira Cidade
cidfinal=cidadefinal;
trajeto[0] = cidinicial;


while(cidadeinicial != cidadefinal){     //Se cidadeinicial ≠ cidadefinal
     for(i=0;i < numcidades;i++){       //Percorre linha
	if((matrizcidade[i][cidadeinicial] < valor) && (matrizcidade[i][cidadeinicial] != mesmacidade) && (i != cidadeatual)) {   //Se (matriz < valor) & (matriz ≠ mesmacidade) & (contador ≠ cidadeatual)
	valor=matrizcidade[i][cidadeinicial];        //valor = posição de linha
	menorvalor = i;           
 }
}
trajeto[cidadesvisitadas] = menorvalor;  
cidadeinicial = menorvalor;  
cidadeatual=trajeto[cidadesvisitadas-1];

resultado = resultado + valor; 
cidadesvisitadas++;
}

  printf("Menor distancia gulosa entre os nos %d e %d::%d\n",cidinicial,cidfinal,resultado);

  printf("Caminho:: ");

    for(j=0;j < cidadesvisitadas - 1;j++){ //Conta de 0 até cidades visitadas - 1
  printf("%d->",trajeto[j]);
}
  printf("%d\n",cidadefinal);

return 0;
}
