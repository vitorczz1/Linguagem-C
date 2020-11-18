/* 
Nome: Vitor Costa Batista  RA:245512

Algoritmos e Programação de computadores - SI200B 


PJ-5 - Máquina de Estados

a) Fazer um projeto de arquitetura do SW de uma smart TV.

b) Implementar uma máquina de estados p/ a tv.

c) Testar sua Implementação */


// Tv - Funções:
//Ligar - Desligar
//Mudar canal
//Aumentar volume - Abaixar volume
//Youtube
//Netflix
//Spotify

#include <stdio.h> //Biblioteca de Entrada/Saída

int canal; //Variáveis Globais
int volume;

void Escolhacanal(){ //Função para escolha do canal
	printf("\nDigite o numero do canal: \n");
	printf(" 2 - TV Cultura \n");
    printf(" 4 - SBT \n");
   	printf(" 5 - Globo \n");
   	printf(" 7 - Record \n");
    printf(" 9 - Rede TV \n");
    printf(" 13 - Band \n");
    
    scanf("%d",&canal); //Guarda o valor da escolha do canal
    
switch (canal){ //Confirma a escolha do canal

   case 2:printf("Voce esta assistindo a TV Cultura! \n");
          break;

   case 4:printf("Voce esta assistindo o SBT! \n");
          break;
   	
   case 5:printf("Voce esta assistindo a Globo! \n");
   	      break;
   	
   case 7:printf("Voce esta assistindo a Record! \n");
   	      break;
   	
   case 9:printf("Voce esta assistindo a Rede TV! \n");
          break;
          
   case 13:printf("Voce esta assistindo a Band! \n");
          break;
    default: printf("Invalido");
        }
 }

void Escolhavolume (){ //Função para escolha do volume
	char vol;
	printf("\nDigite o volume desejado: \n");
	printf(" - = Baixar \n");
    printf(" + = Aumentar \n");
	
	getchar();
	scanf("%c",&vol); //Guarda a escolha do volume

  if (vol == '-'){ //Se o caractere for "-"
	printf("\nO volume abaixou!\n"); //Abaixa o volume
 }

  else if (vol == '+'){ //Se o caractere for "+"
	printf("\nO volume aumentou!\n"); //Aumenta o volume	
 } 

  else{
	printf("\nOperacao invalida \n");
 } 
	
}

void Youtube(){ //Função para o aplicativo Youtube
	int you = 1;
	int escyou;
	
  while (you != 0){ //Enquanto o app estiver aberto...
	printf("\nDigite a opcao desejada: \n");
	printf(" 1 - Buscar video \n");
    printf(" 2 - Reproduzir \n");
   	printf(" 3 - Pausar \n");
   	printf(" 0 - Sair do aplicativo \n");
   	
   	scanf("%d",&you); //Guarda a escolha da função no aplicativo
   	
 switch (you){ //Mostra o resultado da busca

   case 1:printf("\nResultados \n");
          printf(" 1 - Como ficar rico \n");
          printf(" 2 - Banheira de Nutella \n");
          printf(" 3 - Baixar Minecraft gratis \n");
          printf(" 4 - Felipe Neto \n");
          scanf("%d",&escyou); //Guarda o valor de escolha da busca 
          break;

   case 2:printf("\nReproduzindo video! \n");
          break;
   	
   case 3:printf("\nVideo pausado! \n");
   	      break;
   	
   case 0:printf("\nSair \n");
   	      break;

   default: printf("Invalido");
    }

 switch (escyou){ //Confirma a escolha da busca
 	case 1:printf("O video selecionado foi 'Como ficar rico' \n");
          break;

   case 2:printf("O video selecionado foi 'Banheira de Nutella' \n");
          break;
   	
   case 3:printf("O video selecionado foi 'Baixar Minecraft gratis' \n");
   	      break;

   case 4:printf("O video selecionado foi 'Felipe Neto' \n");
   	      break;
  }
 }
}

void Netflix(){ //Função para o aplicativo Netflix
  int net = 1; 
  int escnet;
  
  while (net != 0){ //Enquanto o app estiver aberto...
  printf("\nDigite a opcao desejada: \n");
  printf(" 1 - Pesquisar Series, Filmes ou Desenhos \n");
  printf(" 2 - Reproduzir \n");
  printf(" 3 - Pausar \n");
  printf(" 0 - Sair do aplicativo \n");
  
  scanf("%d",&net); //Guarda a escolha da função no aplicativo
  
  switch (net){ //Mostra o resultado da busca

   case 1:printf("\nResultados: \n");
          printf(" 1 - The Breaking Bad \n");
          printf(" 2 - Narcos \n");
          printf(" 3 - Greys Anatomy \n");
          printf(" 4 - Harry Potter \n");
          scanf("%d",&escnet); //Guarda o valor de escolha da busca
          break;

   case 2:printf("\nReproduzindo conteudo! \n");
          break;
   	
   case 3:printf("\nConteudo pausado! \n");
   	      break;
   	
   case 0:printf("\nSair \n");
   	      break;

    default: printf("Invalido \n");
        }
        
 switch (escnet){ //Confirma a escolha da busca
 	case 1:printf("A serie selecionada foi 'The Breaking Bad' \n");
          break;

   case 2:printf("A serie selecionada foi 'Narcos' \n");
          break;
   	
   case 3:printf("A serie selecionada foi 'Greys Anatomy' \n");
   	      break;

   case 4:printf("O filme selecionado foi 'Harry Potter' \n");
   	      break;
  }
 }
}

void Spotify(){ //Função para o aplicativo Spotify
  int spo = 1;
  int escspo;
  
  while (spo != 0){ //Enquanto o app estiver aberto...
  printf("\nDigite a opcao desejada: \n");
  printf(" 1 - Pesquisar Musica \n");
  printf(" 2 - Reproduzir \n");
  printf(" 3 - Pausar \n");
  printf(" 0 - Sair do aplicativo \n");
  
  scanf("%d",&spo); //Guarda a escolha da função no aplicativo
  
  switch (spo){ //Mostra o resultado da busca

   case 1:printf("\nResultados \n");
          printf(" 1 - Evidencias \n");
          printf(" 2 - Ainda Ontem Chorei de Saudade \n");
          printf(" 3 - Boate Azul \n");
          printf(" 4 - Fio de Cabelo \n");
          scanf("%d",&escspo); //Guarda o valor de escolha da busca
          break;

   case 2:printf("\nTocando Musica!!! \n");
          break;
   	
   case 3:printf("\nMusica pausada! \n");
   	      break;
   	
   case 0:printf("\nSair \n");
   	      break;

    default: printf("\nInvalido \n");
        }
        
 switch (escspo){ //Confirma a escolha da busca
 	case 1:printf("A musica selecionada foi 'Evidencias' \n");
          break;

   case 2:printf("A musica selecionada foi 'Ainda Ontem Chorei de Saudade' \n");
          break;
   	
   case 3:printf("A musica selecionada foi 'Boate Azul' \n");
   	      break;

   case 4:printf("A musica selecionada foi 'Fio de cabelo' \n");
   	      break;
  }       
 }
}

int main(){ //Função principal

int smartv; //Declaração de variáveis
int apps;
int i;

printf("Digite 1 para ligar, ou 0 para desligar: \n");

scanf("%d",&smartv); //Guarda o valor da escolha do menu principal

  switch (smartv){ //Mostra o estado da Smart TV 
    case 0: printf("Desligado \n");        
            break;
         
    case 1: printf("Ligado \n");
		    break;
         
    default: printf("\nNumero Invalido \n");
            break;
}

  while (smartv == 1){ //Enquanto a TV estiver ligada...
  
  printf("\n  SMART TV SAMSUNG NU7100 \n");
  printf(" 1 - Escolha do canal \n");
  printf(" 2 - Escolha do volume \n");
  printf(" 3 - Youtube \n");
  printf(" 4 - Netflix \n");
  printf(" 5 - Spotify \n");
  printf(" 0 - Desligar TV \n");
  
  scanf("%d",&apps); //Guarda o valor da escolha da função
  
  switch (apps){ //Escolhe a função 
   
   case 1:Escolhacanal();
          break;

   case 2:Escolhavolume();
          break;

   case 3:printf("\nVoce mudou para o Youtube");
          Youtube();
          break;
   	
   case 4:printf("\nVoce mudou para o Netflix");
          Netflix();
   	      break;
   	
   case 5:printf("\nVoce mudou para o Spotify");
          Spotify();
   	      break;

   case 0: return 0; //Caso digitado 0, desliga a tv
   	      break;

    default: printf("Invalido \n");
             break;
        }
   }

 return 0;
}
