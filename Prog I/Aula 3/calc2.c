#include <stdio.h>

int soma(int z, int k){
  int resul = z+k;
  printf("%d",resul);
}

int sub(int z, int k){
  int resul = z-k;
  printf("%d",resul);
}

int mult(int z, int k){
  int resul = z*k;
  printf("%d",resul);
}

int divis(int z, int k){
  int resul = z/k;
  printf("%d",resul);
}

int main(){
   int x,y;
   char op;
   
   printf("Digite a operacao desejada: \n");
   scanf("%d",&x);
   scanf("%c",&op);
   scanf("%d",&y);
   
   switch (op){
    
    case '+':
       soma(x,y);
       break;
       
    case '-':
       sub(x,y);
       break;
 
   case '*':
       mult(x,y);
       break;
   
   case '/':
       divis(x,y);
       break;
   	
}
	return  0;
}
