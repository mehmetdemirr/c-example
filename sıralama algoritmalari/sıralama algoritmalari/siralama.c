#include<stdio.h>
void kabarcık(int a[], int b);
void secerek(int a[], int b);
void ekleyerek(int a[], int b);
void diziyazdir(int a[], int b);
int main()
{
	int adet,i,dizi[100];
	printf("Lutfen dizi uzunlugunu giriniz:");
	scanf("%d",&adet);
	for (i = 0; i < adet; i++)
	{
		printf("%d.elemani giriniz:",i+1);
		scanf("%d", &dizi[i]);
	}
	printf("Siralanmamis dizi elemanlari:");
	diziyazdir(dizi, adet);
	printf("Siralanmis dizi elemanlari:");
	kabarcık(dizi,adet);
	//secerek(dizi,adet);
	//ekleyerek(dizi,adet);
	diziyazdir(dizi,adet);
	return;
}
void kabarcık(int a[], int b)
{
	int i, j, gecici;
	for(i=0;i<b-1;i++)
		for(j=0;j<b-1-i;j++)
			if (a[j] > a[j + 1])
			{
				gecici = a[j];
				a[j] = a[j + 1];
				a[j + 1] = gecici;
			}
}
void secerek(int a[], int b)
{
	int i, min, j,gecici;
	for (i = 0; i < b; i++)
	{
		min = i;
		for (j = i; j < b - i; j++)
			if (a[j] < a[min])
				min = j;
		gecici = a[min];
		a[min] = a[i];
		a[i] = gecici;
	}
}
void ekleyerek(int a[], int b)
{
	int i, j, key;
	for (i = 1; i < b; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}
void diziyazdir(int a[], int b)
{
	int i;
	printf("\n");
	for (i = 0; i < b; i++)
		printf("%d ", a[i]);
	printf("\n");
}
