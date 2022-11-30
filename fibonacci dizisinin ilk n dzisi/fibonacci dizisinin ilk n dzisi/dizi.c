#include<stdio.h>
int main()
{
	int n,i,terim=0,toplam=1,gecici;
	printf("Fibonacci dizisinin kacinci elemana kadar gormek istiyorsunuz:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\n%d. terimi %d'dir.", i + 1,terim);
		toplam +=terim;

		gecici = toplam;
		toplam = terim;
		terim = gecici;
	}
	return;
}