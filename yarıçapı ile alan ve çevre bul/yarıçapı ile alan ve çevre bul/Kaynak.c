#include <stdio.h>
#define pi 3.14159

int main()
{
	int r;
	float alan, cevre;
	printf("Lutfen alanini ve cevresini hesaplayacaginiz dairenin yaricapini giriniz: ");
	scanf_s("%d",&r);
	alan = pi * r * r;
	cevre = 2 * pi * r;
	printf("%d yaricapli dairenin alani:%.2f cevresi:%.2f", r, alan, cevre);

}