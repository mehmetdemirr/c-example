#include <stdio.h>

int asalmi(int sayi)
{
		for (int i =2; i < sayi; i++)
		{
			if (sayi%i== 0)
			{
				return 0;
			}
		}
		return 1;
}
int main()
{
	int n;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d",&n);
	if (asalmi(n) == 0)
		printf("Girdiginiz sayi asal sayi degildir.");
	else
		printf("Girdiginiz sayi asal sayidir.");
	return 0;
}
