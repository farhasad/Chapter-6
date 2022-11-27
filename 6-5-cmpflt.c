#include <stdio.h>
#include <math.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;
	
	printf("Kakovo znachenie chisla PI?\n");
	scanf("%lf", &response);
	while(fabs(response-ANSWER)>0.0001)
	{ 
		printf("Vvedite znachenie eshe raz\n");
		scanf("%lf", &response);
	}
	printf("Dostatochno blizko!\n");
	return 0;
}
