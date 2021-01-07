#include <stdio.h>

int main(void){

	int x;

	printf("Introduza um número inteiro POSITIVO: ");
	scanf("%d",&x);
	
	if(x<=0){
		printf("%d é negativo!!!\n",x);
		printf("insira um valor válido!\n");
		return 1;
	}else{
		printf("%d é Positivo!!!\n",x);
		return 0;
	}
}
