//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h> //Incluir Biblioteca padrao de entrada/saida
#include <string.h> //Incluir Biblioteca para manipulacao de strings

void menu();  //PROCEDIMENTOS
void adicionar();    
void encontrar();  
void descriptografar(); 
void visualizar(); 
void padrao(); 
void mensagemnao(); 
void mensagemnao(); 
void menuinvalido(); 
void vazio(); 

void flush_in() { //Procedimento para limpeza do Buffer do teclado
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

int main(){               //Funcao Main
int menu1,i,k;            //Declaracao de Variaveis(int)
int cont=0;               //Declaracao de Variaveis(int)
char padroes[102];        //Declaracao de Variaveis(char)
char mensagemcripto[102]; //Declaracao de Variaveis(char)
int padraoencontrado=0;   //Declaracao de Variaveis(int)

struct pessoa{      //Struct Pessoa
 char agente[102];  //Declaracao de Variaveis(char)
 char depart[62];   //Declaracao de Variaveis(char)
 char mensagem[42]; //Declaracao de Variaveis(char)
 int id;            //Declaracao de Variaveis(int)
} p1[1000]; //Variavel da Struct

void menu() //Procedimento Menu
{
  printf("****MENU DE CRIPTOGRAFIA**** \n");
  printf("1: Criptografar mensagem \n");
  printf("2: Encontrar padroes \n");
  printf("3: Descriptografar mensagem \n");
  printf("4: Visualizar todas as mensagens \n");
  printf("0: Sair! \n");
}

void adicionar()
{//1
  printf("****ADICIONAR MENSAGEM**** \n");
  printf("Digite o nome do agente: \n");
  fgets(p1[cont].agente,102,stdin); //Guarda o nome do agente
  printf("Digite o departamento: \n");
  fgets(p1[cont].depart,62,stdin); //Guarda o nome do departamento
  printf("Digite a mensagem a ser criptografada: \n");
  fgets(p1[cont].mensagem,42,stdin); //Guarda a mensagem
  printf("Digite o numero de identificacao do agente: \n");
  scanf("%d",&p1[cont].id); //Guarda o id
}

void encontrar()
{//2
  printf("****ENCONTRAR PADROES**** \n");
  printf("Digite o padrao a ser encontrado: \n");
  fgets(padroes,102,stdin); //Guarda o padrao a ser encontrado
}

void descriptografar()
{//3
  printf("****DESCRIPTOGRAFAR MENSAGEM**** \n");
  printf("Digite a mensagem criptografada: \n");
  fgets(mensagemcripto,102,stdin); //Guarda a mensagem criptografada
}

void visualizar()
{//4
  printf("****VISUALIZAR TODAS AS MENSAGENS**** \n");
}

void padrao()
{
  printf("****Padrao nao encontrado!**** \n");
}

void mensagemnao()
{
 printf("****Mensagem nao encontrada!**** \n");
}

void menuinvalido()
{
 printf("****Opcao Invalida, tentar novamente**** \n");
}

void vazio()
{
 printf("****Sistema Vazio!**** \n");
}

 menu(); //Chama a funcao menu()

scanf("%d",&menu1); //Guarda o valor de menu1
flush_in(); //Limpa o Buffer do teclado

while(menu1 != 0){ //Enquanto menu1 ≠ 0...

//////////////////////////////// 

 if (menu1 == 1){ //Se digitado 1
 adicionar(); //Chama a funcao adicionar mensagem
   
  for(i = 0;i < strlen(p1[cont].mensagem);i++) { //Conta de 0 ate o tamanho de letras da mensagem
   if(p1[cont].mensagem[i] > 'U'){ //Se mensagem[posicao cont] > letra U
     p1[cont].mensagem[i] = p1[cont].mensagem[i] - 21; //mensagem[cont][posicao i] - 21 letras(tabela ASCII)
}
 else{

 if (p1[cont].mensagem[i] == ' '){ //Se mensagem[cont][posicao i] = 'space'
   p1[cont].mensagem[i] = p1[cont].mensagem[i]; //mensagem[cont][posicao i] = mensagem[cont][posicao i] (troca % por espaco)
}

 else { //Senao
  p1[cont].mensagem[i] = p1[cont].mensagem[i] + 5; //Adiciona 5 letras(tabela ASCII) a mensagem
  } 
 } 
}
  p1[cont].mensagem[strlen(p1[cont].mensagem) - 1] = '\0'; //Subtrai um caractere da mensagem

 cont++; //Adiciona 1 ao contador
}

/////////////////////////////////


 if (menu1 == 2){ //Se digitado 2
 encontrar(); //Chama o procedimento encontrar()

for(i = 0;i < strlen(padroes);i++) { //Conta de 1 ate o numero de letras do padrao digitado
  if(padroes[i] > 'U'){       //Se padroes[posicao i] > Letra 'U'
     padroes[i] = padroes[i] - 21; //padroes[posicao i] - 21 letras(tabela ASCII)
}

else if(padroes[i] == 32){ //Se padrao == 'space'
 padroes[i] = padroes[i]; //Padrao[posicao i] = padrao[posicao i] (troca % por espaco)
}

else { //Senao
padroes[i] = padroes[i] + 5; //Adiciona 5 letras(tabela ASCII) ao padrao
  } 
}

padroes[strlen(padroes) - 1] = '\0'; //Subtrai um caractere dos padroes
 
for(i=0;i < cont;i++){ //Conta de 0 ate contador
 if (strstr(p1[i].mensagem,padroes)) { //Compara mensagem[posicao i] com padrao digitado
  padraoencontrado++; //Se encontrar adiciona +1 ao contador
 }
}

 if(padraoencontrado > 0){ //Se padraoencontrado > 0
  printf("****Padrao encontrado em %d mensagens!**** \n",padraoencontrado); //Imprime o valor de padroes encontrados
}
 else{ //Senao
  padrao(); //Chama a funcao padrao nao encontrado
 }
 padraoencontrado=0; //Reseta o contador
}

//////////////////////////////////////////


 if (menu1 == 3){ //Se digitado 3

 descriptografar(); //Chama o procedimento descriptografar()

for(i=0;i < strlen(mensagemcripto);i++){ //Conta de 0 ate o numero de letras da mensagem criptografada

  if(mensagemcripto[i] == '\n'){ //Se mensagem criptografada = '\n'
     mensagemcripto[i] = '\0'; //Se mensagem criptografada = '\0'
 }
}

for(i=0;i < cont;i++){ //Conta de i ate contador

 if (strcmp(p1[i].mensagem,mensagemcripto) == 0){ //Se (mensagem[posicao i] e mensagem cripto) = 0
 printf("%s",p1[i].agente); //Imprime o agente
 printf("%s",p1[i].depart); //Imprime o departamento

for(k=0;k < strlen(mensagemcripto);k++) {
  if(mensagemcripto[k] < 'E' && mensagemcripto[k] != 32 && mensagemcripto[k] != '\n'){ //Se mensagem critografada < letra 'E' e mensagem critografada ≠ 'space' e mensagem criptografada ≠ \n  
     mensagemcripto[k] = mensagemcripto[k] + 21; //Adiciona 21 letras(tabela ASCII) a mensagem criptografada
}

else if (mensagemcripto[k] != 32 && mensagemcripto[k] != '\n'){ //Se mensagem criptografada[posicao k] ≠ 'space' e mensagem criptografada ≠ \n
mensagemcripto[k] = mensagemcripto[k] - 5; //Subtrai 5 letras(tabela ASCII) a mensagem criptografada
  }
}
  printf("%s\n",mensagemcripto); //Imprime a mensagem criptografada
  printf("%d\n",p1[i].id); //Imprime o id[posicao i]
  break; //Para o looping
 }
}

 if (i == cont){ //Se i = contador, entao...
  mensagemnao(); //Chama o procedimento mensagem nao encontrada()
  }
}

////////////////////////////////////////


 if (menu1 == 4){ //Se digitado 4
 visualizar(); //Chama o procedimento visualizar todas as mensagens()

  for (k=0;k < cont;k++){ //Conta de 0 ate contador
    printf("%s",p1[k].agente); //Imprime o agente[posicao k]
    printf("%s",p1[k].depart); //Imprime o departamento[posicao k]
    printf("%s \n",p1[k].mensagem); //Imprime a mensagem[posicao k]
    printf("%d \n",p1[k].id); //Imprime o id[posicao k]
 }

 if(cont == 0){ //Se contador = 0...
  vazio(); //Chama o procedimento sistema vazio()
 }
}

//////////////////////////////////////

 if(menu1 > 4 || menu1 < 0){ //Se digitado > 4 ou < 0
  menuinvalido(); //Chama o procedimento menu invalido()
}

///////////////////////////////////

menu(); //Volta ao menu

scanf("%d",&menu1); //Guarda o valor de menu1 novamente
flush_in(); //Limpa o buffer do teclado

}	
  return 0;
}
