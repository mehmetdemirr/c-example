#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	printf("Lutfen iki sayi giriniz:");
	scanf_s("%d %d", &sayi1, &sayi2);
tekrar: if (sayi1 > sayi2)
{
	sayi1 = sayi1 - sayi2;
	goto tekrar;
}
else if (sayi2 > sayi1)
{
	sayi2 = sayi2 - sayi1;
	goto tekrar;
}
else
{
	printf("Bu iki sayinin ebobu %d dir.", sayi2);
}

return 0;
}