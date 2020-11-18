//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
int main(){
 float n1,n2,n3,notafinal,exame,notaprovas;

printf("\nDigite 3 notas\n");
 scanf("%f %f %f",&n1,&n2,&n3);

if ((n1 && n2 && n3) >= 6.0){
   printf("\nO aluno está Aprovado\n");
}
else if ((n1||n2||n3)  <= 2.0) {
   printf("\nO aluno está Reprovado\n");
}
   else {
   printf("\nO aluno está de Exame\n");
}


notaprovas = (n1+n2+n3)/3;

if (notaprovas >= 5){
printf("\nDigite a nota do Exame\n");
scanf("%f",&exame);
}

notafinal = (n1+n2+n3+exame)/2;

if (notafinal >= 5) {
  printf("\nO aluno está Aprovado\n");
}

else{
 printf("\nO aluno está Reprovado\n");
}


return 0;
}
