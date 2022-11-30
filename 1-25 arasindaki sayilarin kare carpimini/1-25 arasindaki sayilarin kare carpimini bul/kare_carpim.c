#include<stdio.h>
#include<math.h>
int main()
{
	int i,carpim=1;
	for (i = 1; i <= 5; i++)
	{
		carpim *= pow(i,2);
	}
	printf("1-5(dahil)arasindaki sayilarin karelerinin carpimi:%d", carpim);
	return;
}