#include <stdio.h>
/*int main()
{
	int sayilar[] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i <34; i++)
	{
		printf("\nsayilar dizisinin %dl elamani:%dl\n", (i + 1), sayilar[i]);
	}
	return 0;
}*/
int main()
{
	int i = 0;
	float sayilar[5];
	//float toplam = 0, ort;
	for(i; i < 5; i++)
	{
		printf("\nDizinin %d . elamanina bir deger giriniz:", i + 1);
		scanf_s("%f", &sayilar[i]);
		
	}//toplam += sayilar[i];
	//ort = toplam / 3;
	//printf("Yazdiginiz sayilarin ortalamasi:%f", ort);
	return 0;
}