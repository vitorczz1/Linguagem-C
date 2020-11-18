//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <math.h>

void soma(float a,float ai,float b,float bi) //Procedimento de soma
{
  float soma_reais = (a+b);           //Soma z + w
  float soma_imaginarios = (ai + bi); //Soma zi + wi
  printf("%.0f + %.0fi \n",soma_reais,soma_imaginarios); //Imprime a soma dos reais + imaginarios
}

void multiplicacao(float a,float ai,float b,float bi) //Procedimento de multiplicacao
{
  float mult_reais = (a * b);         //Multiplica z * w
  float mult_imaginarios = (ai * bi); //Multiplica zi * wi
  float mult_reais1 = (a * bi);       //Multiplica z * wi
  float mult_imaginarios1 = (ai * b); //Multiplica zi* w

  float resultado = (mult_reais - mult_imaginarios);    //Resultado real - imaginarios
  float resultado2 = (mult_reais1 + mult_imaginarios1); //Resultado real + imaginarios
  
  printf("%.0f + %.0fi \n",resultado,resultado2); //Imprime a multiplicacao dos resultados
}

int main(){
char op;
float z;
float zi;
float w;
float wi;

 scanf("%f %f %c %f %f",&z, &zi,&op,&w,&wi); //Guarda os valores e o operador

if(op == '+'){   //Se operador = +
soma(z,zi,w,wi); //Chama a funcao soma
}

else if(op == '*'){ //Se operador = *
multiplicacao(z,zi,w,wi);  //Chama a funcao multiplicacao
}

return 0;
}
