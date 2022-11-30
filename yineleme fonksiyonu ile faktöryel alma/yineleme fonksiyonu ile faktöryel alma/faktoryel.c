#include <stdio.h>
int kuvvet(int taban, int us)
{
	while (us >0)
	{
		return taban * kuvvet(taban, us-1);
		us--;
	}
}
int main()
{
	int taban, us;
	printf("Lutfen ussunu alacaginiz sayiyi giriniz(taban):");
	scanf_s("%d",&taban);
	printf("Lutfen tabanin kacinci kuvvetini alaciginiz giriniz(us):");
	scanf_s("%d",&us);
	printf("%d'nin %d. kuvveti %d'dir.",taban,us,kuvvet(taban,us));
	return;
}
