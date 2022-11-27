#include <stdio.h>
#define SIZE 10
#define PAR 72
int main (void)
{
	int index, score[SIZE];
	int sum=0;
	float average;
	printf("Vvedite %d rezultatov igry v golf:\n", SIZE);
	for(index=0; index<SIZE; index++)
		scanf("%d", &score[index]);
	printf("Vvedeny sleduyushie rezultaty:\n");
	for(index=0; index<SIZE; index++)
		printf("%5d", score[index]);
	printf("\n");
	for(index=0; index<SIZE; index++)
		sum+=score[index];
	average=(float)sum/SIZE;
	printf("Summa rezultatov=%d, srednee znachenie=%.2f\n", sum, average);
	printf("Poluchennyi gandikap raven %.0f.\n", average - PAR);
	return 0;
}
