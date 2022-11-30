#include<stdio.h>
int asalmi(int s)
{
	int i;
	for (i = 2; i < s; i++)
		if (s % i == 0)
			return 0;
	return 1;
}
int buyukasalbul(int a)
{
	a--;
	while (asalmi(a) != 1)
		a--;
	return a;
}
int main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d", &sayi);
	printf("%d sayisindan kucuk en buyuk asal sayi:%d",sayi,buyukasalbul(sayi));
	return;
}