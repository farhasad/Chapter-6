#include <stdio.h>
float calculate( float A, float B);
int main (void)
{
	int stopping;
	float A, B;
	printf("Vvedite paru  s plavayushei zapyatoi:");
	while (scanf("%f %f", &A, &B)  == 2)
		printf("(%f-%f)/(%f*%f) = %f",A, B, A, B, calculate(A,B));
	return 0;
}

float calculate( float A, float B)
{
	float calculate;
	calculate = (A-B)/(A*B);
	return calculate;
}
