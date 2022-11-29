#include <stdio.h>
#define MAX 8
int main(void)
{
	int i, ARRAY[MAX];
	printf("Vvedite %d celochislennyh: ", MAX);
	for (i=0;i<MAX;i++)
		scanf("%d", &ARRAY[i]);
	printf("V obratnom poryadke: \n");
	for (i=MAX-1;i>=0;i--)
		printf("%d ", ARRAY[i]);
	return 0;
}

