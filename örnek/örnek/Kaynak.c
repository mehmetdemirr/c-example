#include <stdio.h>

int main()
{
	int i = 5;
	float j = 314.15;
	char karakter='A';
	printf("%5i\n", i);
	printf("%0.1f\n", j);
	printf("%11f\n", j);
	printf("%.1e\n", j);
	printf("%.2e\n", j);
	printf("%c\n",karakter);
	return 0;
}