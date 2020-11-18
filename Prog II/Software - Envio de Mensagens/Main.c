#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

 FILE *arq;
 FILE *arq2;
 
char nome_arquivo[20];
char nome_arquivo_receber[20];
char mensagem[100];
		  
char ext[5];
	
void enviar(){
	
		  printf(" Digite o nome do arquivo para enviar mensagens: ");
		  
		  scanf("%s",&nome_arquivo);
		  
		  
		  
		  arq = fopen("C:/Users/v245512/Documents/"nome_arquivo.txt,"w+t");
		   
		 printf(" Digite a mensagem que deseja enviar: ");
		 
		 getchar();
		 
		 fgets(mensagem,100,stdin);
		 
		 fprintf(arq,"%s", mensagem);
		   
		 fclose(arq);
}

void receber(){
	
	char nome_arquivo[20];

		  printf(" Digite o nome do arquivo de que voce deseja receber as mensagens: ");
		  
		  scanf("%s",&nome_arquivo_receber);
		  
		  if(nome_arquivo_receber == nome_arquivo){
		  	
		   arq2 = fopen(nome_arquivo,"r");
		  	
		  }
		  
		  else{
		  	
		  	printf("O arquivo com este nome não existe");
		  	
		  }
		
		fclose(arq2);
		 	
}
/*
void anexar(){
	
	char nome_arquivo[20];
	
		  FILE *arq2;
		  
		  printf(" Digite o nome do arquivo para anexar: ");
		  
		  scanf("%s",&nome_arquivo);
		
		  arq2 = fopen(nome,"a");
		   
		printf(" Digite a mensagem que deseja receber: ");
		
		   
		 fclose(arq2);
	
}

*/

int main(){
	
	
	int opcao=0;

	do{
		
	
	printf(" \n **************  Bem Vindo ao Programa: ************** \n");
	
	printf(" \n Escolha entre as opcoes : \n \n 1 - Enviar \n 2 - Receber \n 3 - Anexar arquivo \n 4- Criar Grupos \n 5- Adicionar membro \n 6- Remover membro \n");
	
	scanf("\n %d",&opcao);
	

	switch(opcao){
		
		case 1: 
		enviar();
		break;
		
		
		case 2:	
		receber();
		break;	
			
		case 3:
	/*		
	    anexar();
			*/
		break;
		
		case 4:	
		/*
		grupo();
		*/		
		break;
		
		case 5:
		/*	
	    adicionar();
		*/
		break;
		
		case 6:
		exit(0);
		default:
		
		printf("Essa opcão não existe \n");
	}

	}while(opcao != 6);
	

	
	
	
}
