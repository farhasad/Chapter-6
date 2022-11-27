#include <stdio.h>
#define MAX 5
int main(void)
{
	int N, M;
	for(N=0;N<MAX;N++)
	{
		
		for(M=0;M<N+1;M++)
			printf("$");
		printf("\n");
	}
	return 0;
}
