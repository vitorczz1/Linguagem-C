#include <stdio.h>
int main(){

int num,num2, mult,soma,div,sub;

printf("Digite um número: \n");
scanf("%d",&num);

printf("Digite outro número: \n");
scanf("%d",&num2);
mult= num*num2;
soma= num+num2;
div= num/num2;
sub=num-num2;
printf("O resultado da Multiplicação é:%d\n", mult);
printf("O resultado da Soma é:%d\n", soma);
printf("O resultado da Divisão é:%d\n", div);
printf("O resultado da Subtração é:%d\n", sub);

return 0;
}
