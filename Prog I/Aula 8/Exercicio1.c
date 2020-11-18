#include <stdio.h>
#include <string.h>
#define N 81

int main(){
char string[N];
int i,c; 

puts("Digite uma palavra: ");
fgets(string, 81, stdin);

for(i=1;i < strlen(string);i++){
 c++;
}

printf("%d \n",c);







return 0;
}

