#include <stdio.h>

void f(int a) {
a = 2;
printf("2: a=%d \n", a);
}

void f1(int a) {
a=2;
printf("3: a=%d \n",a);
}

int main() {
int a;
a = 1;

printf("1: a=%d \n", a); 
f(a);
f1(a);
return 0 ;
}



