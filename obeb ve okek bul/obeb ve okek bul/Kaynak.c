#include<stdio.h>
int obeb(int sayi, int sayi1);
int okek(int sayi, int sayi1);
void main()
{
	int secim,sayi1,sayi2;
	printf("1-OBEB'ini almak\n2-OKEK'ini almak\n\nLutfen secim yapiniz:");
	scanf_s("%d", &secim);
	if (secim == 1)
	{
		printf("Lutfen iki sayi giriniz:");
		scanf_s("%d%d", &sayi1, &sayi2);
		printf("%d ve %d obebi:%d", sayi1, sayi2, obeb(sayi1, sayi2));
	}
	else if (secim == 2)
	{
		printf("Lutfen iki sayi giriniz:");
		scanf_s("%d%d", &sayi1, &sayi2);
		printf("%d ve %d okeki:%d", sayi1, sayi2, okek(sayi1, sayi2));
	}
	else
		printf("Hatali secim yaptiniz.");
}
int obeb(int sayi1, int sayi2)
{
	while (sayi1 != sayi2)
	{
		if (sayi1 > sayi2)
			sayi1 -= sayi2;
		else if (sayi2 > sayi1)
			sayi2 -= sayi1;
	}
	return sayi1;
}
int okek(int sayi1, int sayi2)
{
	int s1=sayi1,s2=sayi2;
	while (sayi1!=sayi2)
	{
		if (sayi1 > sayi2)
			sayi2 += s2;
		else if (sayi2 > sayi1)
			sayi1 += s1;
	}
	return sayi1;
}