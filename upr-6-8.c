#include <stdio.h>
int main(void)
{
	int stopping;
	float A, B;
	printf("Vvedite paru  s plavayushei zapyatoi:");
	while (scanf("%f %f", &A, &B)  == 2)
		printf("(%f-%f)/(%f*%f) = %f",A, B, A, B, (A-B)/(A*B));
	return 0;
}
