#include<stdio.h>
void main()
{
	int a[100], b[100], i,j=0,N;
	printf("Lutfen a dizisinin eleman sayisini giriniz:");
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("%d. elemani giriniz:",i+1);
		scanf_s("%d", &a[i]);
	}
	for (i = N - 1;i>=0; i--)
	{
		//printf("\n%d", a[i]);
		b[j]= a[i];
		j++;
	}
	printf("b dizisinin elemanlari:");
	for (i = 0; i <N; i++)
		printf("\n%d.eleman=>%d", i + 1, b[i]);
}