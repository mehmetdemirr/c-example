#include<stdio.h>
void main()
{
	int terim = 0, toplam = 1, gecici,adet,i=1;
	printf("Fibonacci dizisisnin kac elemanini gormek istiyorsunuz:");
	scanf_s("%d", &adet);
	while (adet != 0)
	{
		printf("\n%d.eleman=>%d",i,terim);
		toplam += terim;

		gecici = toplam;
		toplam = terim;
		terim = gecici;
		i++;
		adet--;
	}



}