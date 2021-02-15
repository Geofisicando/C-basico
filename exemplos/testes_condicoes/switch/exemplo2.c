#include <stdio.h>
#include <stdlib.h>

int main(void){
	float salario, imposto = 0.0;
	char sexo;

	printf("Introduza o salário: ");
	scanf("%f",&salario);
	printf("Qual o sexo: ");	
	scanf(" %c",&sexo);

	switch(sexo){
		case 'f':
		case 'F': imposto = 0.1;
			  break;
		case 'm':
		case 'M': imposto = 0.15;
			  break;
		default: printf("Sexo inválido!\n"); exit(1);
	}

	printf("Imposto devido %.2f\n",salario*imposto);
}
