#include <stdio.h>
int main(void)
{
	int A, B;
	int i, S;
	printf("Vvedite nizhniy i verhniy celochislennyi predely: ");
	scanf("%d %d", &A, &B);
	while(A<B)
	{
		S=0;
		for(i=A;i<=B;i++)
			S=S+i*i;
		printf("Summa kvadratov celyh chisel ot %d do %d ravna: %d\n", A, B, S);
		printf("Vvedite nizhniy i verhniy celochislennyi predely: ");
		scanf("%d %d", &A, &B);
	}	
	printf("Rabota zavershena");
	return 0;
}
