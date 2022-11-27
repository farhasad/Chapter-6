#include <stdio.h>
double power (double n, int p);
int main(void)
{
	double  x, xpow;
	int exp;
	printf("Vvedite chislo i polozhitelnuyu celuyu stepen',");
	printf("v kotoruyu\n chislo budet vozvedeno. Dlya  zaversheniya programmy");
	printf("vvedite q.\n");
	while(scanf("%lf %d", &x, &exp)==2)
	{
		xpow=power(x,exp);
		printf("%.3g v stepeni %d ravno %.5g\n", x, exp, xpow);
		printf("Vvedite sleduyushuyu paru chisel ili q dlya zaversheniya.\n");
	}
	printf("Nadeemsya, chto vy ocenili eto uprazhnenie - do svidaniya!\n");
	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;
	for(i=1;i<=p;i++)
		pow *=n;
	return pow;
}

