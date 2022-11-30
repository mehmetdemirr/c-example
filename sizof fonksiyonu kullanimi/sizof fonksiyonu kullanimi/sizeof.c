#include<stdio.h>
int main()
{
	int sayi1 = 23,sayilar[100];
	float sayi2 = 3.43;
	char harf = 'm';
	printf("\n%d'nin boyutu: %d", sayi1, sizeof(sayi1));
	printf("\n%f'nin boyutu: %d", sayi2, sizeof(sayi2));
	printf("\n%c'nin boyutu: %d", harf, sizeof(harf));
	printf("\ndizinin boyutu: %d", sizeof(sayilar));

	return;
}
