#include <stdio.h>
#define adet 10

int main()
{
	int k,n=1,tur,tut;
	int cubukboyu[adet];
	printf("%d Adet cubugu siralamak icin cubuk boylarini giriniz:\n",adet);
	for (k= 0; k <adet; k++)
	{
	  printf("%d.Cubuk boyunu giriniz:",n);
      scanf_s("%d", &cubukboyu[k]);
	  ++n;
	}
	printf("Cubuk boylarinin siralanmamis hali:\n");
	for(k=0;k<adet; k++)
	{ 
		printf("%d  ",cubukboyu[k]);
	}
	for (tur = 1; tur < adet; tur++) 
	{ 
		for (k = 0; k < adet - 1; k++) 
			if (cubukboyu[k] > cubukboyu[k + 1])
			{
				tut = cubukboyu[k];
				cubukboyu[k] = cubukboyu[k + 1];
				cubukboyu[k + 1] = tut;
			}
	}
	printf("\nCubuk boylarinin siralanmis hali:\n");
	for (k = 0; k < adet; k++)
	{
		printf("%d  ", cubukboyu[k]);
	}
}
