//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main () {
 char op;
 float num1,num2,div,mult,soma,sub;


 scanf("%f %c %f", &num1 , &op , &num2);
 
 if (op == '/') {
  div = num1 / num2;
printf("\n%.3f%c%.3f%s%.3f\n", num1, op ,num2,"=",div); /*Divisão*/
}
else if (op == '*'){

  mult = num1 * num2;
printf("\n%.3f%c%.3f%s%.3f\n", num1, op ,num2,"=",mult);/*Multiplicação*/
}
else if (op == '+'){
  soma = num1 + num2;
printf("\n%.3f%c%.3f%s%.3f\n", num1, op ,num2,"=",soma);/*Soma*/
}
else if(op == '-'){ 
  sub = num1 - num2;
printf("\n%.3f%c%.3f%s%.3f\n", num1, op ,num2,"=",sub);/*Subtração*/
}
else{
  printf("\nOperador invalido\n");
}
return 0;
}
