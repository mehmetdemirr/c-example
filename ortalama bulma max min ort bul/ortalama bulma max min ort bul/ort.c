#include<stdio.h>
#define BOYUT 100
int main()
{
	int sayi[BOYUT], N, i = 0,max,min;
	float toplam=0,sonuc;
	printf("Lutfen kac adet sayi gireceginizi giriniz:");
	scanf_s("%d", &N);
	if (N <= BOYUT && N > 0)
	{
		while (i <N)
		{
			printf("%d.sayiyi giriniz:",i+1);
			scanf_s("%d", &sayi[i]);
			toplam+= sayi[i];
			if (i == 0)
			{
				max = sayi[i];
				min = sayi[i];
			}
			else if (sayi[i] < min)
				min = sayi[i];
			else if (sayi[i] > max)
				max = sayi[i];
			i++;
		}
		sonuc = (max+min)/ 2.0;
		printf("Girdiginiz sayilarin ortalamasi:%.2f", toplam /N);
		printf("\nGirdiginiz sayilarin en kucugu ve en buyugunun ortalamasi:%.2f", sonuc);
	}
	else
		printf("Lutfen 1-100 araliginda bir sayi giriniz.");
	return;
}