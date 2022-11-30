#include<stdio.h>
int main()
{
	int i,sayi;
	for (i = 10; i <= 200; i++)
	{
		sayi = 3 * i + 2;
		if (sayi % 5 == 0)
			printf("\n%d 'nin 3 katinin 2 fazlasi 5 ile tam bolunur.",i);
	}
	return;
}