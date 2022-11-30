#include <stdio.h>
int main()
{
	char secim;
	char karakter[] = {"MEHTDiR"};
	printf("Lutfen bir harf giriniz:");
	scanf_s("%c", &secim);
	switch (secim)


	{
	case karakter[0]:
		printf("M harfi var");
		break;
	case karakter[2]:
		printf("H harfi var");
		break;
	case karakter[1]:
		printf("E harfi var");
		break;
	case karakter[3]:
		printf("T harfi var");
		break;
	case karakter[4]:
		printf("D harfi var");
		break;
	case karakter[5]:
		printf("i harfi var");
		break;
	case karakter[6]:
		printf("R harfi var");
		break;
	default:
		printf("Girdiginiz harf karakter dizisinde bulunmamaktadır.");
		break;
	}
	return 0;
}


