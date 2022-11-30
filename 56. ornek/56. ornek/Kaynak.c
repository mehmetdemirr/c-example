#include<stdio.h>
int main()
{
	int k,max,i=0;
	printf("Lutfen k icin bir deger giriniz:");
	scanf_s("%d", &k);
	max = k;
	while (k != 1)
	{
		if (k % 2 == 1)
		{
			k = k * 3 + 1;
			i++;
		}
		else
		{
			k /= 2;
			i++;
		}
	    if (k > max)
			max = k;
	}
	printf("\nk en buyuk degeri:%d", max);
	printf("\nislem sayisi:%d", i);
	return;
}