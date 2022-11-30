#include<stdio.h>
int main()
{
	int a[100], i, adet,k;
	printf("Lutfen a dizisinin eleman sayisini giriniz:");
	scanf_s("%d", &adet);
	printf("Lutfen a dizisinin elemanlarini giriniz:\n");
	for (i = 0; i < adet; i++)
	{
		printf("%d.elemani girin:",i + 1);
		scanf_s("%d", &a[i]);    
	}
	printf("Lutfen 'k' sabitini giriniz:");
	scanf_s("%d", &k);
	printf("a dizisinin elemanlarinin k ile carpimi:");
	for (i = 0; i < adet; i++)
		printf("\n%d.eleman:%d", i + 1,a[i]*k);
}