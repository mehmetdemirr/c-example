#include <stdio.h>
int main()
{
	int sayi,faktoryel=1;
	printf("Lutfen sayi giriniz:");
	scanf_s("%d", &sayi);
	/*printf("%d!=", sayi);
	for (sayi; sayi > 0; sayi--)
		faktoryel *= sayi;
	printf("%d", faktoryel);
	*/
	int i;
	for (i = 1; sayi >= i; i++)
		faktoryel *= i;
	printf("%d!=%d", sayi, faktoryel);
	
	return;
}