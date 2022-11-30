#include <stdio.h>
void siniflandir(int not)
{
	if (90 <= not && not<= 100)
		printf("4");
	else if (80 <= not && not<= 89)
		printf("3");
	else if (70 <= not && not<= 79)
		printf("2");
	else if (60 <= not && not<= 69)
		printf("1");
	else if (0 <= not && not<= 59)
		printf("0");
	else
		printf("Hatali not girisi yaptiniz.");
}
int main()
{
	int not;
	printf("Lutfen notunuzu giriniz:");
	scanf_s("%d", &not);
	printf("\nNotunuzun 4 uzerinden ortalama karsligi:");
	siniflandir(not);
	return;
}