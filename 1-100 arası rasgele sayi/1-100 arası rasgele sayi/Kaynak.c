#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	printf("Programimiza hos geldiniz.\nProgramimiz 1-100 arasi rasgele sayi vermektedir.");
	srand(time(NULL));
	printf("\n\nprogramimizin rasgele verdigi sayi:%d\n\n", (1 + rand() % 100));
}