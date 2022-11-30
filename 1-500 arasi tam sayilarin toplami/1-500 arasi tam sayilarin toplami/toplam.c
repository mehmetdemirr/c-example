#include<stdio.h>
int main()
{
	int toplam=0,i;
	for (i = 1; i <= 500; i++)
	{
		toplam += i;
	}
	printf("1-500 arasindaki tam sayilarin toplami:%d", toplam);
	return;
}