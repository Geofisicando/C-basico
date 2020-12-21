#include <stdio.h>

int main(void){

	char c1, c2;

	printf("Introduza um caractere: "); scanf("%c",&c1);
	printf("Introduza outro caractere: "); scanf(" %c",&c2);

	printf("O primeiro caractere introduzido foi %c e o segundo foi %c \n",
		c1, c2);
}
