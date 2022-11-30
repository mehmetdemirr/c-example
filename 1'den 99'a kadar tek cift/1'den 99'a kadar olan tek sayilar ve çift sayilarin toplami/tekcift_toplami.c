#include <stdio.h>

int main()
{
	int ttoplam=0, ctoplam=0;
	for (int i = 1; i <100; i++)
	{
		if (i % 2 == 0)
			ctoplam += i;
		else
		ttoplam += i;
	}
	printf("\n1'den 99'a kadar tek sayilarin toplami %d dir.", ttoplam);
	printf("\n1'den 99'a kadar cift sayilarin toplami %d dir.", ctoplam);
	return 0;


}