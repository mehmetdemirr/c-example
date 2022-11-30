#include<stdio.h>
int main()
{
	int sayi,kalan[15],i=0;
	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &sayi);
	printf("\n%d sayisinin ikilik tabanda gosterimi:",sayi);
	kalan[i]=sayi % 2;
	sayi /= 2;
	//printf("\ndeneme:%d  kalan:%d", sayi,kalan[i]);
	while(sayi>0)
	{
		i++;
		kalan[i]=sayi%2;
		sayi /= 2;
		//printf("\ndeneme:%d  kalan:%d", sayi, kalan[i]);
	}
	for (i; i >= 0; i--)
	{
		printf("%d", kalan[i]);
	}
	return;
}