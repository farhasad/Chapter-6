#include <stdio.h>
int main(void)
{
	int MIN, MAX, i;

	printf("Vvedite nizhnee znachenie: ");
	scanf("%d", &MIN);

	printf("Vvedite verhnee znachenie: ");
	scanf("%d", &MAX);
	
	printf("\n       X|     X*X|   X*X*X|\n");
	for(i=0; i<=MAX-MIN; i++)
		printf("%8d|%8d|%8d|\n", MIN+i, (MIN+i)*(MIN+i), (MIN+i)*(MIN+i)*(MIN+i));
	return 0;
}

