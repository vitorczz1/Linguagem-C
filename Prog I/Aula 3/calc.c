#include <stdio.h>
int main(){
int  n1,n2,resul;
char op;

scanf("%d %c %d",&n1,&op,&n2);

switch (op){
case '+': 
 (resul = n1 + n2);
 break;
case '-':  
  (resul = n1 - n2);
  break;
case '*':  
  (resul = n1 * n2);
break;
case '/':  
  (resul = n1 / n2);
break;
}
printf("%d %c %d %c %d",n1,op,n2,'=',resul);  	
  	
	return  0;
}
