#include <stdio.h>
int main()
{
	int t1 = 0, f1 = 1, i, j;
	for (i = 1; i <= 5; i+=3)
	{
		t1 = i;
		j = 4;
		for (j = 4; j >= 1; j-=2)
		{
			if (i > j)
				t1 += j;
			else
				f1 *= j;
		}
		t1 -= i;
		f1 /= i;
	}
	printf("2*t1=%d\nf1/2= %d", 2 * t1, f1 / 2);
	return;
}