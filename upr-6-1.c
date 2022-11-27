#include <stdio.h>
#define LETTERS 26
int main(void)
{
	char L[LETTERS];
	int i;
	for(i=0;i<LETTERS;i++)
		L[i]='a'+i;
	for(i=0;i<LETTERS;i++)
		printf("%c",L[i]);
	return 0;
}

