#include <stdio.h>

secim(void)
{
	printf("\nToplama icin:1");
	printf("\nCikarma icin:2");
	printf("\nCarpma icin:3");
	printf("\nBolme icin:4");
	printf("\nMod almak icin:5");
	return 0;
}
int main()
{
	int sec;
	printf("\nLutfen yapacaginiz islemi seciniz:",secim());
	scanf_s("%d",&sec);






}