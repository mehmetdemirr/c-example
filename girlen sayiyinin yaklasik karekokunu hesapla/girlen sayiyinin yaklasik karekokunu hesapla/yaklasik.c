#include<stdio.h>
#include<math.h>
void main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &sayi);
	printf("%d'nin yaklasik karekoku %.2f'dir.", sayi, sqrt(sayi));
}