#include<stdio.h>
int max_rakamyaz(int i);
int main()
{
	int sayi, sonuc;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &sayi);
	sonuc=max_rakamyaz(sayi);
	printf("Girdiginiz sayinin rakamlarinin en buyugu:%d", sonuc);
	return;
}
int max_rakamyaz(int sayi)
{
	int i,max=0;
	while (sayi != 0)
	{
		i = sayi % 10;
		sayi/= 10;
		if (i > max)
			max = i;
	}
	return max;
}
