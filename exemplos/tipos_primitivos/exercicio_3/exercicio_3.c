#include <stdio.h>

int main(void){

	float f;

	printf("Introduza um número real: ");
	scanf("%f",&f);

	printf("parte inteira = %d\n",(int)f);
	printf("parte decimal = %f\n", f - ((int)f));
}
