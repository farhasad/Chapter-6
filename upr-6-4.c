#include <stdio.h>
#define N 6
int main(void)
{
	int i,j,k;
	k = 0;
	for(i=0;i<N;i++)
	{
		for (j=0;j<=i;j++)
			{
				printf("%c",'A'+k);
				k++;
			}
		printf("\n");
	}
	return 0;
}
