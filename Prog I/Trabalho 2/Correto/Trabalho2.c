//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
int i, digitado,contador;

int somapar = 0;
int somaimpar = 0;
int somaprimo = 0;
int cont = 0;


scanf("%d",&digitado); /* Espera  o Teclado*/

if (digitado>0){     
   for (contador = 2;contador < digitado;contador++){
    for (i = 1; i <= contador; i++) {
    if (contador % i == 0) { 

     cont++;
    }
  }
  
  if (cont == 2) {     /* Numero Primo */
    somaprimo = somaprimo + contador; 
}
  if (cont != 2) {    /*  Numero Não Primo */
  if (i % 2  == 1){        /* Par */
  somapar = somapar + contador;
}
  if (i % 2 == 0){            /* Impar */
  somaimpar = somaimpar + contador;
}}
cont=0;
}
printf("%d %d %d\n",somapar,somaimpar,somaprimo);

}
else{
 printf("Número Inválido");
}

return 0;
}
