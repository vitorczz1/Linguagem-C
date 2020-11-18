//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <math.h>

float volume_esfera(float raio)
{
 float volume = (4*3.14159* pow(raio,3) /3);
 return volume;
}

int main(){
float raio;

scanf("%f", &raio);

printf("%.2f\n",volume_esfera());

return 0;
}
