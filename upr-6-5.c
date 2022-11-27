#include <stdio.h>
int main(void)
{
	int i,j;
	char CH;
	printf("Vvedite bukvu:");
	scanf("%c", &CH);
	for(i=0; i<=CH-'A';i++)
	{
		for(j=0; j<CH-'A'-i;j++)
			printf(" ");
		for(j=0; j<=i-1; j++)
			printf("%c", 'A'+j);
		for(;j>=0;j--)
			printf("%c", 'A'+j);
		for(j=0;j<CH-'A'-i;j++)
			printf(" ");
		printf("\n");
	}
	return 0;
}
