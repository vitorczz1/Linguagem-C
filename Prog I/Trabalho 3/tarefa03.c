//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>  //Biblioteca de Entrada-Saída
#define N 25  //Define o limite de 25

int main(){
int numcidades,cidadeinicial,cidadefinal,i,j,menorvalor,cidinicial,cidfinal,cidadeatual,valor;
int matrizcidade[N][N];
int resultado = 0;
int mesmacidade = 0;
int cidadesvisitadas = 1 ;

    scanf("%d", &numcidades); //Espera o número de cidades

int trajeto[numcidades]; //vetor trajeto = numero de cidades
  
  for (i=0;i < numcidades;i++){  //Conta as linhas da matriz
     for (j=0;j < numcidades;j++){ //Conta as colunas da matriz 
        scanf("%d", &matrizcidade[i][j]); //Guarda linha x coluna na matriz
    }
 }
    scanf("%d", &cidadeinicial);  //Espera a cidade inicial
    scanf("%d", &cidadefinal);    //Espera a cidade final

cidadeatual=cidadeinicial; //cidade atual = começo desde a primeira cidade 
cidinicial=cidadeinicial; //cidade inicial = primeira cidade
cidfinal=cidadefinal;  //cidade final = ultima cidade
trajeto[0] = cidinicial; //primeiro cidade do vetor = primeira cidade


 do{        //Faça...
      valor=5000;  //Define um valor grande, visto que o primeiro valor tem que ser sempre menor(verdadeiro) 
    for(i=0;i < numcidades;i++){       //Percorre linha 
	if((matrizcidade[i][cidadeinicial] < valor) && (matrizcidade[i][cidadeinicial] != mesmacidade) && (i != cidadeatual)) {   //Se (matriz < 5000) e (matriz[linha][inicial] ≠ da mesma cidade) e (linha ≠ da cidade atual)   
	valor=matrizcidade[i][cidadeinicial];   //valor = [linha][cidade inicial]     
	menorvalor = i;   //menor valor = linha (correspondente as cidades)        
    }
 }
trajeto[cidadesvisitadas] = menorvalor;  //trajeto [cidades visitadas] = menor valor (correspondente a rota)
cidadeinicial = menorvalor;  //cidade inicial = menor valor (correspondente a rota)
cidadeatual=trajeto[cidadesvisitadas-1]; //cidade atual = trajeto[das cidades visitadas -1]

resultado = resultado + valor; //Resultado das somas = resultado + valor(correspondente a rota)
cidadesvisitadas++; //Incrementa as cidades que foram visitadas
 }

 while(cidadeinicial != cidadefinal);  //Se cidadeinicial ≠ cidadefinal 

printf("Menor distancia gulosa entre os nos %d e %d::%d\n",cidinicial,cidfinal,resultado); //Imprime a menor distancia

printf("Caminho:: ");  //Imprime o caminho
    for(j=0;j < cidadesvisitadas - 1;j++){ //Conta de numero de cidades visitadas - 1
       printf("%d->",trajeto[j]); //Imprime as cidades visitadas, de acordo com a quantidade de cidades 
 }
  trajeto[j+1] = cidadefinal; //trajeto[ultima posicao + 1]
  printf("%d\n", trajeto[j+1]); //Imprime a ultima cidade

return 0;
 }
