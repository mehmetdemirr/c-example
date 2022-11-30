#include<stdio.h>
void main()
{
	int seviye, i,j,k,m=2;
	printf("Seviye giriniz:");
	scanf_s("%d", &seviye);
	for (i = 0; i<seviye; i++)
	{
		for (k = 1; k <=seviye-i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i + 1; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	for (i = seviye-1; i>0; i--)
	{
		for (k = 1; k <=m; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (i-1) + 1; j++)
		{
			printf("%d", j);
		}
		printf("\n");
		m++;
	}
}