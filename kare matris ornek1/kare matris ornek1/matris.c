#include<stdio.h>
void main(void)
{
	int m[100][100], i, j,sayi,n,k;
	printf("Lutfen bir tam sayi giriniz:");
	scanf("%d", &sayi);
	if (sayi % 2 == 1)
	{
		n = sayi / 2;
		for (i = 0; i < sayi; i++)
		{
			if (n == i)
			{
				for (j = 0; j < sayi; j++)
				{
					m[i][j] = 1;
				}
			}
			else
			{
				for (j = 0; j < sayi; j++)
				{
					if (j == n)
						m[i][j] = 1;
					else
						m[i][j] = 0;

				}
			}
		}
	}
	else
	{
		n = sayi / 2;
		k = n - 1;
		for (i = 0; i < sayi; i++)
		{
			if (n == i || k == i)
				for (j = 0; j < sayi; j++)
					m[i][j] = 1;
			else
			{
				for (j = 0; j < sayi; j++)
				{
					if (j == n || j == k)
						m[i][j] = 1;
					else
						m[i][j] = 0;
				}
			}
		}
	}
	printf("\n");
	for (i = 0; i < sayi; i++)
	{
		for (j = 0; j <sayi; j++)
			printf("%d", m[i][j]);
		printf("\n");
	}
}