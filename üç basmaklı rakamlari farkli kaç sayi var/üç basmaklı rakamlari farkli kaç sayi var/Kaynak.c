#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, sayi,sayac=0;
	for (sayi=100; sayi < 1000; sayi++)
	{
		a = sayi%10; //a birler basamagi
		b =(sayi/10)% 10; //b onlar basamagi
		c = sayi/100; //c yuzler basamagi
		if (a != b && a != c && b != c)
			sayac += 1;
	}
	printf("Uc basmakli rakamlari farkli %d tane sayi vardir.", sayac);
	return 0;
}