/* Nome: Vitor Costa Batista RA 245512   
   G_SI200B - Algoritmos e programação de Computadores II 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int i;
	
double med(double v[]){ //Função media
 double media = 0;
	
 for (i=0;i < 100;i++){
  media = media + v[i]; //Soma o valor do vetor a variável média
  }
  media =  (media / 100); //Calcula a media
}


double dev(double v[]){ //Função desvio
 double media = 0;
	
 double desvio_padrao = 0;	
 double result_desviopadrao = 0;	

 for(i=0;i < 100;i++){

  double soma_desviopadrao = 0.0;
  soma_desviopadrao = (v[i] - media); //Calcula o desvio a partir da media
  soma_desviopadrao = pow(soma_desviopadrao, 2); //Calcula o desvio pela exponenciação 
  desvio_padrao = desvio_padrao + soma_desviopadrao; //Calcula o desvio padrão 
  soma_desviopadrao = 0;
 }
 result_desviopadrao = sqrt(desvio_padrao / (100)); //Calcula o desvio pela raiz quadrada
}


int main() {   //Função Principal

 double v[100]; //Vetor com 100 posições
 double (*posicao[3])(double[]); //Vetor com 2 posições 
 posicao[1] = med; //Ponteiro para o vetor media
 posicao[2] = dev; //Ponteiro para o vetor desvio


	srand(time(NULL)); //Função RAND
		 	
	for (i=0;i < 100;i++){
	  v[i]= (double)rand() / (double) RAND_MAX; //Guarda os valores no vetor e define o intervalo 0 e 1 
	  printf("\nVetor [%d] = %.3lf",i, v[i]); //Imprime a posicao do vetor com o seu valor
	}
	  printf("\n");

      printf("\nMedia: %.3lf ",posicao[1](v)); //Imprime a Média
      printf("\nDesvio Padrao: %.3lf ",posicao[2](v)); //Imprime o Desvio Padrão

 return 0;

}
