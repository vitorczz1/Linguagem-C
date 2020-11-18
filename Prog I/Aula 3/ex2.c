#include <stdio.h>
int main(){
 int numero=0;
 printf("Digite um numero de 0 a 10\n");
 numero = scanf("%d", &numero);
if (numero >= 1){
  if (numero <=10)
   printf("Correto\n");
}
else{ 
 printf("Numero incorreto\n");
}
return 0;

}
