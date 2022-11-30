#include<stdio.h>
int main()
{
	int d = 6, i;
	for (i = 2; i < 7; i++)
	{
		printf("%d %d\n", d, i);
		d--;
	}
	return 0;
}