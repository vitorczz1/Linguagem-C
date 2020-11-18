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
int cont1=0;
char agente[100];
char tecl_descript[100];
int padraoencontrado=0;

struct pessoa{
 char agente[100];
 char depart[60];
 char mensagem[40];
 char mensagemcripto[40];
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
  fgets(p1[cont].agente,100,stdin);
  printf("Digite o departamento: \n");
  fgets(p1[cont].depart,60,stdin);
  printf("Digite a mensagem a ser criptografada: \n");
  fgets(p1[cont].mensagem,40,stdin);
  printf("Digite o numero de identificacao do agente: \n");
  scanf("%d",&p1[cont].id);
}
void encontrar()
{//2
  printf("****ENCONTRAR PADROES**** \n");
  printf("Digite o padrao a ser encontrado: \n");
  fgets(agente,100,stdin);
}
void descriptografar()
{//3
  printf("****DESCRIPTOGRAFAR MENSAGEM**** \n");
  printf("Digite a mensagem criptografada: \n");
  fgets(tecl_descript,100,stdin);
tecl_descript[strlen(tecl_descript)-1]= '\0';
 
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
 p1[cont].mensagem[strlen(p1[cont].mensagem) -1] = '\0';
}
 cont++;
}



 //if (menu1 == 2){
 
//encontrar();
 
 //for(i=0;i < cont;i++){
 //if (strstr(agente,p1[cont].mensagemcripto[i])) {
 //padraoencontrado++;
 //}
 //}
 //else if(){ 
 // padrao();
 //}
 //else{
 // 
 //}
 //printf("****Padrao encontrado em %d mensagens!****",padraoencontrado); 


 if (menu1 == 3){
 descriptografar();

 for(i=0;i < strlen(p1[cont1].mensagemcripto);i++) {
  if(p1[cont1].mensagemcripto[i] < 'E'){
     p1[cont1].mensagemcripto[i] = p1[cont1].mensagemcripto[i] + 21;
	}
else {
p1[cont1].mensagemcripto[i] = p1[cont1].mensagemcripto[i] - 5;
  }
 }

 for (k=0;k < cont;k++){

 printf("%ld \n",strlen(tecl_descript));
 printf("%ld \n",strlen(p1[k].mensagem));
if (tecl_descript==p1[k].mensagemcripto){
 printf("%s",p1[k].agente);
 printf("%s",p1[k].depart);
 printf("%s \n",p1[k].mensagem);
 printf("%d \n",p1[k].id);
  }
 }
 cont1++;
}

 if (menu1 == 4){
 visualizar();

 for (k=0;k < cont;k++){
 printf("%s",p1[k].agente);
 printf("%s",p1[k].depart);
 printf("%s \n",p1[k].mensagem);
 printf("%d \n",p1[k].id);
 }
}

//Se digitado > 4 ou < 0
if(menu1 > 4 || menu1 < 0){
 menuinvalido();
}

menu();


scanf("%d",&menu1);
flush_in();

}
	
	return 0;
}

