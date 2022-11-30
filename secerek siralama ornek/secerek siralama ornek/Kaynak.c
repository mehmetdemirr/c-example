#include<stdio.h>
#define N 100
void diziyaz(int a[], int b);
void secereksirala(int a[], int b);
int main()
{
	int dizi[N], i,adet;
	printf("Lutfen kac adet sayi gireceksiniz:");
	scanf("%d",&adet);
	for (i = 0; i < adet; i < i++)
	{
		printf("%d.sayiyi giriniz:", i + 1);
		scanf("%d", &dizi[i]);
	}
	printf("Dizinin siralanmamis hali:\n");
	diziyaz(dizi, adet);
	secereksirala(dizi, adet);
	printf("\nDizinin siralanmis hali:\n");
	diziyaz(dizi, adet);
	return;
}
void diziyaz(int a[], int b)
{
	int i;
	for (i = 0; i < b; i++)
		printf("%d ", a[i]);
}
void secereksirala(int a[], int b)
{
	int i,j,min,gecici;
	for (i = 0; i < b - 1; i++)
	{
		min = i;
		for (j = i; j < b - i; j++)
			if (a[j] < a[min])
				min = j;
		gecici = a[i];
		a[i] = a[min];
		a[min] = gecici;
	}
}