#include <stdio.h>
int main(void)
{
	int n = 3;
	while(n)
		printf("%2d yavlyaetsya istinnym\n", n--);
	printf("%2d yavlyaetsya lozhnym\n", n);
	
	n = -3;
	while(n)
		printf("%2d yavlyaetsya istinnym\n", n++);
	printf("%2d yavlyaetsya lozhnym\n", n);
	
	return 0;
}

