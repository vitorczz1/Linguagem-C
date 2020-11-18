//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <math.h>

float soma(float n1,float n2);

float subtracao(float n1,float n2);

float multiplicacao(float n1,float n2);

float divisao(float n1,float n2);

float potencia(float n1,float n2);


int main(){
float n1,n2;
char sinal;

scanf("%f %c %f",&n1,&sinal,&n2);

float soma(float n1,float n2){ 
 return n1+n2;
}

float subtracao(float n1, float n2){
 return n1-n2;
}

float multiplicacao(float n1, float n2){
 return n1*n2;
}

float divisao(float n1, float n2){
return n1/n2;
}

float potencia(float n1, float n2){
 float pot = pow(n1,n2);
 return pot;
}

if(sinal == '+'){
 printf("%.3f\n",soma(n1,n2));
}

if(sinal == '-'){
 printf("%.3f\n",subtracao(n1,n2));
}

if(sinal == '*'){
 printf("%.3f\n",multiplicacao(n1,n2));
}

if(sinal == '/'){
 printf("%.3f\n",divisao(n1,n2));
}

if(sinal == '^'){
 printf("%.3f\n",potencia(n1,n2));
}

return 0;
}
