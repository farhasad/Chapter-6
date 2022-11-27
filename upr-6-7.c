#include <stdio.h>
#include <string.h>
#define MAX 200
int main(void)
{
	char STRING[MAX];
	int i;
	printf("Vvedite slovo: ");
	scanf("%s", STRING);
	i = strlen (STRING);
	printf("Dlina slova - %d, slovo - %s, slovo v obratnom poryadke - ",i , STRING);
	for(; i>=0;i--)
		printf("%c",STRING[i]);
	return 0;
}


