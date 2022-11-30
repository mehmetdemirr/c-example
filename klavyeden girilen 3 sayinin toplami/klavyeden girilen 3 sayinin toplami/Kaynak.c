#include <stdio.h>

int main()
{
	int fakt = 1, sayi,i=1;
	printf("Lutfen farktoryelini alacaginiz sayiyi giriniz:");
	scanf_s("%d",&sayi);
	tekrar:
	if (i <= sayi)
	{
		fakt *=i;
		i++;
		goto tekrar;
	}
	printf("%d nin faktoryeli %d dir.",sayi,fakt);
   return 0;
}