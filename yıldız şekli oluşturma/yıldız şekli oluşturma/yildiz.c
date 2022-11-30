#include <stdio.h>
int main()
{
	int i, j, k ;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &k);
	for (i = 1; i <=k ; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % 2 == 0)
			{	
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}