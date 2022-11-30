#include <stdio.h>
long f(long sayi)
{
	if (sayi == 0 || sayi == 1)
		return sayi;
	else
		return f(sayi - 1) + f(sayi - 2);
}
void main()
{
	int eleman,sonuc,i;
	printf("Lutfen fibonacci dizisinin kacinci elemanina kadar ulasmak istiyorsunuz:");
	scanf_s("%ld", &eleman);
	for (i = 0; i < eleman; i++)
	{
		printf("\nFibonnaci dizisinin %ld. elemani %ld'dir.",i,f(i));
	}

}