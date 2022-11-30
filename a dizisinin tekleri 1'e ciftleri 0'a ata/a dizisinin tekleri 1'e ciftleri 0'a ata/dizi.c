#include<stdio.h>
int main()
{
	int a[100], i, N;
	printf("Lutfen a dizisin eleman sayisini giriniz:");
	scanf_s("%d", &N);
	if (N <= 100)
	{
		for (i = 0; i < N; i++)
		{
			printf("%d.elemani giriniz:", i + 1);
			scanf_s("%d", &a[i]);
			if (a[i] % 2 == 0)
				a[i] = 0;
			else
				a[i] = 1;
		}
		printf("a dizisinin elemanlari:");
		for (i = 0; i < N; i++)
			printf("\n%d.eleman=>%d", i + 1, a[i]);
	}
	else
		printf("\nLutfen 1-100 (araliklar dahil)arasinda bir deger giriniz.");
	return;
}