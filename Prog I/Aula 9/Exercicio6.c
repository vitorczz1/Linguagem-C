#include <stdio.h>

int main(){
float Tempofinal;

struct time2{
char placa[10];
char marca[20];
float entrada;
float saida;
} Tempo1;

fgets(Tempo1.placa,10,stdin);
fgets(Tempo1.marca,20,stdin);
scanf("%f %f",&Tempo1.entrada,&Tempo1.saida);

Tempofinal = Tempo1.entrada-Tempo1.saida;

printf("%.2f minutos, marca: %s, placa: %s\n",Tempofinal,Tempo1.marca,Tempo1.placa);

return 0;
}
