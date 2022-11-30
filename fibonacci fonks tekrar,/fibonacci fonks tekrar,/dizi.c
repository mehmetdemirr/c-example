#include<stdio.h>
int main()
{
	int sonuc= 0,n,toplam = 1,gecici,i;
	printf("fibonacci dizisinin ilk kac elemanini istiyorsun:");
	scanf_s("%d",&n);
	for (i = 1; i <= n; i++)
	{
		printf("\n%d.terimi:%d", i,sonuc);
		toplam +=sonuc;

		gecici = toplam;
		toplam = sonuc;
		sonuc = gecici;
	}


}