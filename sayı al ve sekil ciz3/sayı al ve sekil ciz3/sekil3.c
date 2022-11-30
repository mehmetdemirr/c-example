#include<stdio.h>
int main()
{
	int i, j, k, N,m;
	printf("Lutfen sayi giriniz:");
	scanf_s("%d", &N);
	for (i =-1; i < N-1; i++)
	{
		for (j =N; i<j ; j--)
			printf(" ");
		m = i;
		m += 3;
		for (k = 1; k <=m; k++)
			printf("*");
		printf("\n");
	}
	return;
}