#include <stdio.h>

int main(void){

	int dia, mes, ano;

	printf("Introduza o dia, mês e ano no formato aaaa-mm-dd: ");
	scanf("%d-%d-%d",&ano,&mes,&dia);

	printf("%d/%d/%d\n",dia,mes,ano);
}
