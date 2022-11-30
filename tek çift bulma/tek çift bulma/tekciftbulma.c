#include <stdio.h>
int main()
{
	int sayi, mod;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%ld",&sayi);
	if (sayi % 2 == 0)
		printf("Girdiginiz sayi cift sayidir.");
	else
		printf("Girdiginiz sayi tek sayidir.");
	return 0;





}