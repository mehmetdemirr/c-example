#include<stdio.h>
void main()
{
	int a[100], b[100], c[100],n,i;
	printf("a dizisi eleman sayisini giriniz:");
	scanf_s("%d",&n);
	printf("a dizisinin elemanlarini giriniz:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d.elemani giriniz:", i + 1);
		scanf_s("%d", &a[i]);
	}
	printf("b dizisinin elemanlarini giriniz:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d.elemani giriniz:", i + 1);
		scanf_s("%d", &b[i]);
	}
	printf("c dizisinin elemanlari:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d.eleman:%d\n",i+1,a[i]+b[i]);
	}
}