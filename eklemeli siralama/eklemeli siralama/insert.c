#include<stdio.h>
#define N 100
void diziyazdir(int a[], int b);
void eklemelisiralama(int a[], int b);
int main()
{
	int sayilar[N],i,adet;
	printf("Kac adet sayiyi siralacaksiniz:");
	scanf("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d.sayiyi girniz:", i + 1);
		scanf("%d", &sayilar[i]);
	}
	printf("Siralanmamis dizi:\n");
	diziyazdir(sayilar, adet);
	printf("\nSiralanmis dizi:\n");
	eklemelisiralama(sayilar, adet);
	diziyazdir(sayilar, adet);
	return;
}
void diziyazdir(int a[], int b)
{
	int i;
	for (i = 0; i < b; i++)
		printf("%d ", a[i]);
}
void eklemelisiralama(int a[], int b)
{
	int i, j,key;
	for (i = 1; i < b; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j+ 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}