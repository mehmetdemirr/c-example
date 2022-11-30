#include <stdio.h>
#include <conio.h>
int main()
{
	int sayi,fakt=1,i;
    printf("\nLutfen faktoryelini alacaginiz sayiyi giriniz:");
	scanf_s("%d", &sayi);
	for (i = 1; i <= sayi; i++)
	{
		fakt *= i;
	}
	printf("%d 'in faktoryeli %d 'dir. ", sayi, fakt);

	return 0 ;
}