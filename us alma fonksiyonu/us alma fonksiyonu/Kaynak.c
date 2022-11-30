#include <stdio.h>

int tamsayikuvveti(int taban, int us)
{
	int i,sonuc=1;
	for (i = 1; i <= us; i++)
		sonuc *= taban;
	return sonuc;
}
int main()
{
	int taban, us,sonuc;
	printf("Lutfen ussunu alacaginiz sayiyi giriniz(taban):");
	scanf_s("%d", &taban);
	printf("Lutfen girdginiz kac kuvvetinde alacaginizi giriniz(ussu):");
	scanf_s("%d", &us);
	sonuc = tamsayikuvveti(taban, us);
	printf("\n%d sayisinin %d. kuvveti %d'dir.\n",taban,us,sonuc);
	return;
}