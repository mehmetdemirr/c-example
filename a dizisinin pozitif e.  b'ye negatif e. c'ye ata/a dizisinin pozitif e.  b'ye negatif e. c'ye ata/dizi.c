#include<stdio.h>
void main()
{
	int a[100], b[100], c[100],adet,i,x=0,y=0;
	printf("Lutfen a dizisinin kac elemanli oldugunu giriniz:");
	scanf_s("%d",&adet);
	printf("Lutfen a dizisinin elemanlarini giriniz:\n");
	for (i = 0; i < adet; i++)
	{
		printf("%d.elemani giriniz:",i+1);
		scanf_s("%d",&a[i]);
		if (a[i] < 0)
		{
			c[x] = a[i];
			x++;
		}
		else
		{
			b[y] = a[i];
			y++;
		}
	}
	printf("c dizisini yazdirma(negatif):");
	for(i=0;i<x;i++)
	{
		printf("\n%d. elemani=>%d", i + 1, c[i]);
	}
	printf("\nb dizisini yazdirma(pozitif ve sifir):");
	for (i = 0; i < y; i++)
	{
		printf("\n%d. elemani=>%d", i + 1, b[i]);
	}

}