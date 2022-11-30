#include<stdio.h>

int main()
{

	int vize, final, sonuc;
	printf("lutfen vize notunuzu giriniz:");
	scanf_s("%d",&vize);
	printf("lutfen final notunuzu giriniz:");
	scanf_s("%d", &final);
	sonuc = vize * 0.4 + final * 0.6;
	printf("Ders ortalamaniz :%d \n", sonuc);
	if (sonuc >= 90 && sonuc<=100)
		printf("AA");
	else if (sonuc >= 80)
		printf("BB");
	else if (sonuc >= 70)
		printf("CC");
	else if (sonuc >= 50)
		printf("DD");
	else
		printf("FF");
	
		return 0;


}