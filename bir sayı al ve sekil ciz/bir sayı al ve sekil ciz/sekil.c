#include<stdio.h>
int main()
{
	int N,i,j;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
	{
		for(j=0;j<i;j++)
			printf("*");
		printf("\n");
	}
	return;
}