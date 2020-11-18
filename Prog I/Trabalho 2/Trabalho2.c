//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
int digitado;
int pnaoprimo,inaoprimo,primo,resul,somaprimo;

scanf("%d",&digitado); /* Espera  o Teclado*/

resul=0;  
if (digitado>0){
 for (primo = 2; primo <=  (digitado / 2); primo++){
   if (digitado % primo == 0)
     resul++;
     break;
 }
}
else 
 printf("Numero nao valido\n");

if  (resul == 0){       /* Numero Primo */
 /*Soma dos Primos*/
printf("Primo  %d\n", digitado);
}

if  (resul != 0){       /*  Numero Não Primo */ 

if (resul % 2  == 1){    /* Par */
printf("Nao Primo Par\n");}

if (resul  == 0){    
	printf("Nao Primo Impar\n");  /* Impar */
}  
}


//printf("Soma dos Pares Nao Primos: \n");
//printf("Soma dos impares Nao Primos: \n");
//printf("Soma  dos Primos Antecessores: %d\n", somaprimo);

return 0;
}
