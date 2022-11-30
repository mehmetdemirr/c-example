#include <stdio.h>
#include <ctype.h>

void isaret(int sayi)
{
	if (sayi > 0)
		printf("%d pozitif bir tam sayidir.", sayi);
	else if (sayi == 0)
		printf("%d notr bir tam sayiyir.", sayi);
	else
		printf("%d negatif bir tam sayidir.", sayi);
}
int main()
{
	float sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%f",&sayi);
	if (sayi - (int)sayi == 0)
	{
		isaret(sayi);
	}
	else
		printf("Lutfen tam sayi giriniz.");
	return;
}