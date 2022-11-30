#include<stdio.h>
#include<math.h>
int faktoryel(int sayi);
int main()
{
	int sayi;
	printf("Lutfen sayi giriniz:");
	scanf_s("%d", &sayi);
	if (sayi < 5)
		printf("Kurala gore sayiniz:%d",faktoryel(sayi));
	else if(sayi<=10 && sayi>=5)
		printf("Kurala gore sayiniz: %.1f",pow(sayi,2));
	else
		printf("Kurala gore sayiniz:%.1f", sayi/2.0-1);
	return;
}
int faktoryel(int sayi)
{
	int fakt=1,i;
	for (i = sayi; i > 1; i--)
		fakt *= i;
	return fakt;
}