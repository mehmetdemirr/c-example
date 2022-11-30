#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int katilim,tahlili;
	printf("Lutfen cekilise kac kisi katilacagini giriniz:");
	scanf_s("%d", &katilim);
	char ad[30], soyad[30];
	for (int i = 1; i <= katilim; i++)
	{
		printf("\nAdinizi ve soyadinizi giriniz:");
		scanf_s("%s %s", &ad[30],&soyad[30]);
	}
	printf("Lutfen talihli sayisini giriniz:");
	scanf_s("%d", &tahlili);
	srand(time(NULL));
	for (int j = 1; j <= tahlili; j++)
	{
		printf("%d. tahlihli %s %s", j, ad[25], soyad[25]);

	}






}