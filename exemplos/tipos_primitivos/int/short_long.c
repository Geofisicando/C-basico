#include <stdio.h>

int main(void){

	long int matricula;
	short int nota;

	printf("Qual a matrícula? "); scanf("%ld",&matricula);
	printf("Qual a nota? "); scanf("%hd",&nota);

	printf("A nota do aluno com matrícula %ld é %hd\n",matricula,nota);
}
