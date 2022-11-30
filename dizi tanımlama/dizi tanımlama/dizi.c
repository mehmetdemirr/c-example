#include<stdio.h>
#define BOYUT 3
int main()
{
	float sayilar[BOYUT],deger=0.1,*nPtr;
	int i;
	nPtr =&sayilar;
	for (i = 0; i < BOYUT; i++)
	{
		printf("%d.elemani giriniz:",i+1);
		scanf("%f",&sayilar[i]);
	}
	for (i = 0; i < BOYUT; i++)
	{
		printf("\n%d.eleman=>%.1f", i + 1,nPtr[i]);
	}
	return;
}