#include <stdio.h>
int main()
{
	int vize, final, ort;
	printf("Lutfen vize notunuzu giriniz: ");
	scanf_s("%d", &vize);
	printf("Lutfen final notunuzu girin:");
	scanf_s("%d", &final);
	ort = vize * 0.4 + final * 0.6;
	printf("Ortalaminiz:%d", ort);
	printf("\nDersten aldiginiz harf:");
	if (ort == 100 && ort >= 90)
		printf("\nAA");
	else if (ort >= 70)
		printf("\nBB");
	else if (ort >= 50)
		printf("\nCC");
	else
		printf("FF");
	return 0;
}