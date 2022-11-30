#include <stdio.h>
#define ELEMAN 4
int main()
{
	int eleman[ELEMAN],i;
	for (i = 0; i < ELEMAN; i++)
	{
		printf("%d.elemanin satis miktarini giriniz:",i+1);
		scanf_s("%d",&eleman[i]);
	}
	for (i = 0;i < ELEMAN;i++)
	{
		printf("\n%d.elemanin maasi:%.2f",i+1,200+eleman[i]*0.09);
	}


}