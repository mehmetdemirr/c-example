#include <stdio.h>

int main()
{
	int kilo,boy;
	float  sonuc;
	printf("\nLutfen kac kilo oldugunuzu girin:");
	scanf_s("%d",&kilo);
	printf("\nLutfen boyunuzun uzunlugunu girin:");
	scanf_s("%d", &boy);
	sonuc = kilo / ((boy * boy)*0.0001);
	printf("\nDURUMUNUZ:");
	if (sonuc <= 18.5)
		printf("zayif");
	else if (18.5 < sonuc && sonuc <= 25)
		printf("normal kilolu");
	else if (25 < sonuc && sonuc <= 30)
		printf("fazla kilolu");
	else if (30 < sonuc && sonuc <= 35)
			printf("1.derece obez");
	else if (35 < sonuc && sonuc <= 40)
			printf("2.derce obez");
	else
			printf("3.derece obez");
	printf("\nVucut kitle endeksiniz:%.2f", sonuc);
	
	return 0;
}