#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void sifre();
void main()
{
	int adet,i,sayi;
	srand(time(NULL));
	printf("Lutfen kac elemanli sifre olusturacaginizi giriniz:");
	scanf("%d",&adet);
	printf("Olusturulan sifre:\n");
	for (i = 0; i < adet; i++)
	{
		sayi = 1+rand() % 76;
		sifre(sayi);
	}
	printf("\n\n");
}
void sifre(int secim)
{
	switch (secim)
	{
	case 1:printf("a"); break;
	case 2:printf("b"); break;
	case 3:printf("c"); break;
	case 4:printf("d"); break;
	case 5:printf("e"); break;
	case 6:printf("f"); break;
	case 7:printf("g"); break;
	case 8:printf("h"); break;
	case 9:printf("i"); break;
	case 10:printf("j"); break;
	case 11:printf("k"); break;
	case 13:printf("l"); break;
	case 14:printf("m"); break;
	case 15:printf("n"); break;
	case 16:printf("o"); break;
	case 17:printf("p"); break;
	case 18:printf("r"); break;
	case 19:printf("s"); break;
	case 20:printf("t"); break;
	case 21:printf("u"); break;
	case 22:printf("v"); break;
	case 23:printf("y"); break;
	case 24:printf("z"); break;
	case 25:printf("x"); break;
	case 26:printf("A"); break;
	case 27:printf("B"); break;
	case 28:printf("C"); break;
	case 29:printf("D"); break;
	case 30:printf("E"); break;
	case 31:printf("F"); break;
	case 32:printf("G"); break;
	case 33:printf("H"); break;
	case 34:printf("I"); break;
	case 35:printf("J"); break;
	case 36:printf("K"); break;
	case 37:printf("L"); break;
	case 38:printf("M"); break;
	case 39:printf("N"); break;
	case 40:printf("O"); break;
	case 41:printf("P"); break;
	case 42:printf("R"); break;
	case 43:printf("S"); break;
	case 44:printf("T"); break;
	case 45:printf("U"); break;
	case 46:printf("V"); break;
	case 47:printf("Y"); break;
	case 48:printf("Z"); break;
	case 49:printf("X"); break;
	case 50:printf("1"); break;
	case 51:printf("2"); break;
	case 52:printf("3"); break;
	case 53:printf("4"); break;
	case 54:printf("5"); break;
	case 55:printf("6"); break;
	case 56:printf("7"); break;
	case 57:printf("8"); break;
	case 58:printf("9"); break;
	case 59:printf("0"); break;
	case 60:printf("."); break;
	case 61:printf(","); break;
	case 62:printf(":"); break;
	case 63:printf(";"); break;
	case 64:printf("?"); break;
	case 65:printf("!"); break;
	case 66:printf("-"); break;
	case 67:printf("+"); break;
	case 68:printf("%"); break;
	case 69:printf("*"); break;
	case 70:printf("$"); break;
	case 71:printf(">"); break;
	case 72:printf("<"); break;
	case 73:printf("&"); break;
	case 74:printf("#"); break;
	case 75:printf("£"); break;
	case 76:printf("|"); break;
	}
}