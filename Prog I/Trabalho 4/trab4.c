//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <string.h>
#define N 1000

void menu();
void adicionar();
void encontrar();
void descriptografar();
void visualizar();
void padrao();
void mensagemnao();
void mensagemnao();
void menuinvalido();
void vazio();

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

int main(){
int menu1,i,k;
int cont=0;
char padroes[102];
char mensagemcripto[102];
int padraoencontrado=0;

struct pessoa{
 char agente[102];
 char depart[62];
 char mensagem[42];
 int id;
}p1[1000];

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
  fgets(p1[cont].agente,102,stdin);
  printf("Digite o departamento: \n");
  fgets(p1[cont].depart,62,stdin);
  printf("Digite a mensagem a ser criptografada: \n");
  fgets(p1[cont].mensagem,42,stdin);
  printf("Digite o numero de identificacao do agente: \n");
  scanf("%d",&p1[cont].id);
}
void encontrar()
{//2
  printf("****ENCONTRAR PADROES**** \n");
  printf("Digite o padrao a ser encontrado: \n");
  fgets(padroes,100,stdin);
}
void descriptografar()
{//3
  printf("****DESCRIPTOGRAFAR MENSAGEM**** \n");
  printf("Digite a mensagem criptografada: \n");
  fgets(mensagemcripto,102,stdin);
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
 printf("****Opção Invalida, tentar novamente**** \n");
}

void vazio()
{
 ("****Sistema Vazio!****");
}

 menu();

scanf("%d",&menu1);
flush_in();

while(menu1 != 0){

//////////////////////////////// 

 if (menu1 == 1){
 adicionar();
   
 for(i = 0;i < strlen(p1[cont].mensagem);i++) {
  if(p1[cont].mensagem[i] > 'U'){
     p1[cont].mensagem[i] = p1[cont].mensagem[i] - 21;
	}
else{

 if (p1[cont].mensagem[i] == ' '){
   p1[cont].mensagem[i] = p1[cont].mensagem[i];
}

else {
p1[cont].mensagem[i] = p1[cont].mensagem[i] + 5;
  } 
 } 
}
  p1[cont].mensagem[strlen(p1[cont].mensagem) - 1] = '\0';

 cont++;
}


/////////////////////////////////


 if (menu1 == 2){
 encontrar();

for(i = 0;i < strlen(padroes);i++) {
  if(padroes[i] > 'U'){
     padroes[i] = padroes[i] - 21;
}

else if(padroes[i] == 32){
 padroes[i] = padroes[i];
}

else {
padroes[i] = padroes[i] + 5;
  } 
}

padroes[strlen(padroes) - 1] = '\0';
 
for(i=0;i < cont;i++){
 if (strstr(p1[i].mensagem,padroes)) {
  padraoencontrado++;
 }
}

if(padraoencontrado > 0){
printf("****Padrao encontrado em %d mensagens!**** \n",padraoencontrado);
}
 else{ 
  padrao();
 }
}

//////////////////////////////////////////


 if (menu1 == 3){

 descriptografar();

for(i=0;i < strlen(mensagemcripto);i++){
  if(mensagemcripto[i] == '\n'){
     mensagemcripto[i] = '\0';
 }
}

for(i=0;i < cont;i++){

 if (strcmp(p1[i].mensagem,mensagemcripto) == 0){
 printf("%s",p1[i].agente);
 printf("%s",p1[i].depart);

for(k=0;k < strlen(mensagemcripto);k++) {
  if(mensagemcripto[k] < 'E' && mensagemcripto[k] != 32 && mensagemcripto[k] != '\n'){
     mensagemcripto[k] = mensagemcripto[k] + 21;
	}
else if (mensagemcripto[k] != 32 && mensagemcripto[k] != '\n'){
mensagemcripto[k] = mensagemcripto[k] - 5;
  }
}

 printf("%s\n",mensagemcripto);
 printf("%d\n",p1[i].id);
break; 
}
 }

 if (i == cont){
  mensagemnao();
  }
}

////////////////////////////////////////


 if (menu1 == 4){
 visualizar();

 for (k=0;k < cont;k++){
 printf("%s",p1[k].agente);
 printf("%s",p1[k].depart);
 printf("%s \n",p1[k].mensagem);
 printf("%d \n",p1[k].id);
 }

 if(cont == 0){
  vazio();
 }
}


//////////////////////////////////////


//Se digitado > 4 ou < 0
if(menu1 > 4 || menu1 < 0){
 menuinvalido();
}

///////////////////////////////////

menu();


scanf("%d",&menu1);
flush_in();

}
	
	return 0;
}

