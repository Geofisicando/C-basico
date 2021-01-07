#include <stdio.h>

int main(void){

	int x, y;
	
	/* 0 falso
	!=0 verdadeiro 1, -1, 2, 0.1, 0.001*/

	printf("Introduza 2 inteiros: ");
	scanf("%d %d",&x,&y);

	printf("O resultado de %d == %d : %d\n",x,y,x==y);
	printf("O resultado de %d >  %d : %d\n",x,y,x>y);
	printf("O resultado de %d >= %d : %d\n",x,y,x>=y);
	printf("O resultado de %d <  %d : %d\n",x,y,x<y);
	printf("O resultado de %d <= %d : %d\n",x,y,x<=y);
	printf("O resultado de %d != %d : %d\n",x,y,x!=y);
}
