#include<stdio.h>
int main()
{
	int sayi1, sayi2,gecici;
	printf("sayi1 giriniz:");
	scanf_s("%d",&sayi1);
	printf("\nsayi2 giriniz:");
	scanf_s("%d", &sayi2);
	gecici = sayi1;
	sayi1 = sayi2;
	sayi2 = gecici;
	printf("sayi1:%d\nsayi2:%d", sayi1, sayi2);
	return 0;
}

