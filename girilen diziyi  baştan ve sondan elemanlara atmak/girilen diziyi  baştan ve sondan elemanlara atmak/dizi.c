#include<stdio.h>
#define BOYUT 100
void main()
{
	int dizi[BOYUT], i,adet,k=0;
	printf("Lutfen kac adet sayi girecegini giriniz:");
	scanf("%d",&adet);
	int m = adet - 1;
	for (i = 0; i < adet; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d.elemani giriniz:", i + 1);
			scanf("%d",&dizi[k]);
			k++;
		}
		else
		{
			printf("%d.elemani giriniz:", i + 1);
			scanf("%d",&dizi[m]);
			m--;
		}
	}
	for (i = 0; i < adet; i++)
		printf("\n%d.eleman=>%d", i + 1, dizi[i]);







}