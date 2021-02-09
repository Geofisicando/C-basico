#include <stdio.h>

int main(void){

	int dinheiro;
	int valor_ingresso=50;

	printf("Quanto dinheiro vc tem? ");scanf("%d",&dinheiro);

	printf("%s ir ao cinema\n",
	(dinheiro>=valor_ingresso)? "poderá":"NÃO poderá");
}
