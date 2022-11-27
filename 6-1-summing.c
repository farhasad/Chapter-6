#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;
	printf("Vvedite celoe chislo dlya posleduyushego summirovaniya ");
	printf("(ili q dlya zaversheniya programmy: ");
	status = scanf("%ld", &num);
	while (status == 1)
	{
		sum = sum + num;
		printf("Vvedite sleduyushee celoe chislo (ili q dlya zaversheniya programma): ");
		status = scanf("%ld", &num);
	}
	printf("Summa vvedennyh celyh chisel ravna %ld\n", sum);
	return 0;
}
