#include <stdio.h>

int main(void){
	
	int segundos;

	printf("Introduza o número de segundos: ");
	scanf("%d",&segundos);

	/* 60 segundos = 1 minuto
	60*(60 segundos) = 60 minutos = 1 hora */
	
	printf("horas=%d\n",segundos/3600);
	printf("minutos=%d\n",(segundos%3600)/60);
	printf("segundos=%d\n",segundos%60);

	printf("%d:%d:%d\n",
		segundos/3600,
		(segundos%3600)/60,
		segundos%60);
}
