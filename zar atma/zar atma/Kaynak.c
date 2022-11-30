#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int adet, zarkenari;
	srand(time(NULL));
	printf("Kac tane zar atmak istiyorsun:");
	scanf_s("%d",&adet);
	printf("Kacli zar atmak istiyorsun:");
	scanf_s("%d", &zarkenari);
	for (int i = 1; i <= adet; i++)
		printf("\n%d. zar: %d", i,(1+rand()%zarkenari));
	return 0;




}
