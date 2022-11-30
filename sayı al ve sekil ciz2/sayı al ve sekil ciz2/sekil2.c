#include<stdio.h>
int main()
{
	int i, j,k,N;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &N);
	for (i = 1; i <= N; i++)
	{
		for (j =N; j> i; j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}
	return;
}