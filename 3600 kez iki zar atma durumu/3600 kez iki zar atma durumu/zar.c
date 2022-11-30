#include <stdio.h>
#include <time.h>
#define ADET 3600

int main()
{
	srand(time(NULL));
	int zar1, zar2, i, f[11]={0}, toplam[ADET];
	for (i = 0; i <ADET; i++)
	{
		zar1 = 1 + rand() % 6;
		zar2 = 1 + rand() % 6;
		toplam[i] = zar1 + zar2;
		++f[toplam[i]];
	}
	printf("%4s %13s\n", "TOPLAM", "FREKANS");
	for (i =0; i <11; i++)
	{
		printf("%4d %13d\n",i+2,f[i+2]);
	}
	return;
}