#include <stdio.h>
#include <math.h>


int main()
{
	int sayi1, sayi2, sayi3,toplam;
	float ort;
	printf("Lutfen bir sayi giriniz:");
    //scanf_s("%d,%d,%d", &sayi1, &sayi2, &sayi3);
	scanf_s("%d",&sayi1);
	scanf_s("%d",&sayi2);
	scanf_s("%d",&sayi3);
	toplam = sayi1 + sayi2 + sayi3;
	ort = toplam / 3.0;
	printf("Girdiginiz sayilarin ortalamasi:%.3f", ort);



	return 0;
  


}