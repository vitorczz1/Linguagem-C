#include <stdio.h>
#include <math.h>

float imc(float peso,float altura){
 return peso/pow(altura,2);
}

int main(){
float peso,altura;

scanf("%f %f",&peso,&altura);

if (imc(peso,altura) < 18.5){
 printf("Abaixo do Peso\n");
}

if(18.5 <= imc(peso,altura) && imc(peso,altura) <= 25.0){
 printf("Peso Normal\n");
}

if (25.0 < imc(peso,altura) && imc(peso,altura) <= 30.0){
 printf("Acima do Peso\n");
}

if (imc(peso,altura) > 30){
 printf("Obeso\n");
}


return 0;
}
