#include <stdio.h>

int main(void){
	float salario; imposto = 0.0;
	char sexo;

	printf("Introduza o salário: ");
	scanf("%f",&salario);
	printf("Qual o sexo: ");
	sexo = getchar();

	switch(sexo){
		case 'f':
		case 'F': imposto = 0.1;
			  break;
		case 'm':
		case 'M': imposto = 0.15;
			  break;
	}

	printf("Imposto devido %.2f\n",salario*imposto);
}
