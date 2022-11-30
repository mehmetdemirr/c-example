#include <stdio.h>
void terscevir(int sayi)
{
    int basamak[5]={0}, i = 0,j=0;
    while (sayi != 0)
    {
        basamak[i] = sayi % 10;
        sayi /=10;
        ++i;
    }
    for (j;j<=i;j++)
    {
        printf("%d  ",basamak[j]);
    }
}
int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz:");
    scanf_s("%d", &sayi);
    terscevir(sayi);
    return;
}
