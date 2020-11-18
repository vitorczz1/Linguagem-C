//Vitor Costa Batista RA 245512
//1ºSemestre 2019 -  SI100B
#include <stdio.h>
#include <stdlib.h>

int main() {
float* v;
float med= 0.0;
int n, i;

scanf("%d", &n);

v= (float *) malloc(n*sizeof(float));

 if(v == NULL) {
 printf("Memoria insuficiente\n");
 return 1;
}

for (i=0; i<n; i++) {
scanf("%f", &v[i]);
med = med + v[i];
}
printf("A media é %.2f\n", med/n);
free(v);
return 0;
}



