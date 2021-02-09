#include <stdio.h>

int main(void){
	float salario;
	printf("Qual o salário? "); scanf("%f",&salario);

	salario = (salario<10000)? salario+1000:salario;

	printf("Salário final: %.2f\n",salario);
}
