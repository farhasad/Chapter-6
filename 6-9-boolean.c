#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0;
	_Bool input_is_good;
	printf("Vvedite celoe chislo dlya posleduyushego summirovaniya ");
	input_is_good = (scanf("%ld", &num) == 1);
	while(input_is_good)
	{
		sum = sum + num;
		printf("Vvedite sleduyushee celoe chislo (ili 'q' dlya zaversheniya programmy): ");
		input_is_good = (scanf("%ld", &num) ==1);
	}
	printf("Summa vvedennyh celyh chisel ravna %ld.\n", sum);
	return 0;
}
