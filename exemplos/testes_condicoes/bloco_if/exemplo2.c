#include <stdio.h>

int main(void){

	int x;

	printf("Introduza um número inteiro: ");
	scanf("%d",&x);
	
	if(x!=0)
		printf("%d é diferente de zero!!!\n",x);
	else
		printf("%d é igual a zero!!!\n",x);
}
