#include <stdio.h>
int main()
{
	int sayi1;
	printf("Lutfen sayi giriniz:");
	scanf_s("%d",&sayi1);
	for(int i = 2; i < sayi1; i++)
	{
		if (sayi1 % i == 0)
		{
			printf("Girdiginiz sayi asal sayi degildir."); 
		}
		else
		{
			printf("Girdiginiz sayi asal sayidir."); 
		}
	}
}