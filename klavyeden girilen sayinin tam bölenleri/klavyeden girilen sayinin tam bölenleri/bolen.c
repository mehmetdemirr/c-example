#include <stdio.h>
void yazdir()
{
	printf("\n1-Pozitif tam bolen sayisi\n2-Negatif tam bolen sayisi\n3-Toplam tam bolen sayiyisi\n");
	printf("4-Tam bolenlerinin toplami\n5-Pozitif tam bolenlerini yazdirmak"
		"\n6-Asal tam bolenleri\n7-Pozitif tam bolenlerinin carpimi\n\nLutfen bir secim yapiniz:");
}
int asalmi(int sayi)
{
	int i;
	for (i = 2; i < sayi && sayi%i!=0; i++);
	if (sayi == i)
		return 1;
	else
		return 0;
}
int main()
{
	int sayi,carpimbolen=1,j,i, asalbolensayisi=0,
		toplam=0,toplambolen=0,secim;
	printf("Lutfen bir sayiyi giriniz:");
	scanf_s("%d",&sayi);
	for (i = 1; i <= sayi; i++)
	{
		if (sayi % i == 0)
		{
			toplam++;
			toplambolen += i;
			carpimbolen *= i;
		}
	}
	tekrar:
	yazdir();
	scanf_s("%d",&secim);
	switch (secim)
	{
	case 1:
		printf("%d tane pozitif tam boleni vardir.", toplam); break;
	case 2:
		printf("%d tane negatif tam boleni vardir.", toplam); break;
	case 3:
		printf("%d tane toplam tam boleni vardir.",2*toplam); break;
	case 4:
		printf("Toplam tam bolenlerinin toplami 0'dir"); break;
	case 5:
		printf("Pozitif tam bolenleri:");
		for (i = 1; i <= sayi; i++)
		{
			if (sayi % i == 0)
			{
				printf("%4d", i);
			}
		}
		break;
	case 6:
		printf("Asal tam bolen sayilari:");
		for (i = 1; i <= sayi; i++)
		{
			if (sayi % i == 0)
			{
				if (asalmi(i) == 1)
				{
					printf("%4d", i);
					asalbolensayisi++;
				}

			}
		}
		break;
	case 7:
		printf("Pozitif tam bolenlerinin carpimi %d'dir.",carpimbolen); break;
	default:
		printf("Hatali bir secim yaptiniz.\n");
		goto tekrar;
	}
	return;
}