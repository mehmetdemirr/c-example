#include <stdio.h>
int main()
{
	int dizi[10], i,giris;
	printf("10 elemanli bir dizinin elemanlarinin degerini giriniz.\n");
	for (i = 0; i <10; i++)
	{
		printf("%d. eleman:",i+1);
		scanf_s("%d",&dizi[i]);
		printf("\n");
	}
	printf("Girdiginiz degerleri gormek icin 1'i tuslayiniz!");
	scanf_s("%d",&giris);
	if (1== giris)
	{
		for (i = 0; i <10; i++)
		{
			printf("\n%d. eleman:%d",i+1,dizi[i]);
		}
	}
	return;
}