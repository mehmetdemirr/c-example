#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void random_doldur(int c[], int b)
{
    for (int a = 0; a < b; a++)
    {
        c[a] = rand() % 10 ;
    }

}
void yazdir(int i[], int b)
{
    for (int a = 0; a < b; ++a)
    {
        printf("%d ", i[a]);
    }

}
void yazdirHistogram(int hist[], int b)
{
    int a, c;
    for (a = 0; a < b; a++)
    {
        printf("%d=>", a);
        for (c = 0; c < hist[a]; ++c)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int b,arr[100];
    printf("Dizinin uzunlugunu giriniz: ");
    scanf("%d",&b);
    random_doldur(arr, b);
    yazdir(arr, b);
    printf("\n");
    int B[10] = { 0 };
    for (int a = 0; a < 10; ++a)
    {
        for (int c = 0; c < b; c++)
        {
            if (arr[c] == a)
            {
                B[a]++;
            }
        }
    }
    yazdir(B, 10);
    printf("\n");
    yazdirHistogram(B, 10);
    return 0;
}