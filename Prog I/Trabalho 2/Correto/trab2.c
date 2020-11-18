//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
int cont,pnaoprimo,inaoprimo,primo,resul,somaprimo, digitadon,i, digitado;

scanf("%d",&digitado); /* Espera  o Teclado*/

cont = 0;
if (digitado>0){
     for (i = 1; i <= digitado; i++) {
    if (digitado % i == 0) { 
     cont++;
    }
  }
    
  if (cont == 2) {     /* Numero Primo */
    printf("%d é primo", digitado);
    primo++;
}
  if (cont != 2) {    /*  Numero Não Primo */
  if (i % 2  == 1){        /* Par */
  printf("Nao Primo Par\n");
  pnaoprimo++;
}
  if (i == 0){            /* Impar */
  printf("Nao Primo Impar\n");  
  inaoprimo++;
}  
}

 for (cont == 2; primo <= digitado ;primo--){/* Soma dos Primos Antecedentes */
  if (){
 }
}



}
else{
 printf("Número Inválido");
}
//printf("Soma dos Pares Nao Primos: \n");
//printf("Soma dos impares Nao Primos: \n");
//printf("Soma  dos Primos Antecessores: %d\n", somaprimo);

return 0;
}
