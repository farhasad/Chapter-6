#include <stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;

	printf("Chtoby voiti v klub lechenie triskaidekafobiya, \n");
	printf("pozhaluista, vvedite sekretnyi kod: ");
	scanf("%d", &code_entered);
	while(code_entered!=secret_code)
	{
		printf("Chtoby voiti v klub lechenie triskaidekafobiya, \n");
		printf("pozhaluista, vvedite sekretnyi kod: ");
		scanf("%d", &code_entered);
	}
	printf("Pozdravlyaem! Vas vylechim!\n");
	return 0;
}
