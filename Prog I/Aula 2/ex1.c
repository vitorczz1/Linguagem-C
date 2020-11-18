#include <stdio.h>
int main(){

float P1,P2,T,M,M1;

printf("Digite a primeira nota:\n");
scanf("%f", &P1);

printf("Digite a segunda nota:\n");
scanf("%f", &P2);

printf("Digite a terceira nota:\n");
scanf("%f", &T);

M=P1+P2+T;
M1=M/3;

printf("A media das notas é:%f\n", M1 );

return 0;
}
