#include <stdio.h>
#define N 6
int main(void)
{
	int A, B;
	for(A=0; A<N; A++)
	{
		for(B=0;B<=A;B++)
			printf("%c",'F'-B);
		printf("\n");
	}
	return 0;
}
