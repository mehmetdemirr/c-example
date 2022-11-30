#include<stdio.h>
void yerdegistir(int *x,int *y);
int main()
{
	int x, y;
	int *xptr, *yptr;
	printf("x icin bir deger giriniz:");
	scanf_s("%d", &x);
	printf("y icin bir deger giriniz:");
	scanf_s("%d", &y);
	xptr = &x;  yptr = &y;
	yerdegistir(xptr,yptr);
	printf("\nx degeri:%d",x);
	printf("\ny degeri:%d",y);
	return;
}

void yerdegistir(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}