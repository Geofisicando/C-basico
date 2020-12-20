#include <stdio.h>

int main(void){

	unsigned long int matricula;
	unsigned short int nota;

	printf("Qual a matrícula? "); scanf("%lu",&matricula);
	printf("Qual a nota? "); scanf("%hu",&nota);

	printf("A nota do aluno com matrícula %lu é %hu\n",matricula,nota);
}
