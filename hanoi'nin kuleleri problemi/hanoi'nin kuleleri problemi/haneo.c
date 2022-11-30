#include <stdio.h>
int hanoi(int disk,int icubuk,int scubuk, int gcubuk)
{


}
int main()
{
    int disk,icubuk,scubuk,gcubuk;
    printf("NOT:Bu program hanoi kuleleri oyunun hamlelerini vermektedir.");
    printf("Hanoi kuleleri oynuna hos geldin.");
    printf("Tasinacak disk sayisini giriniz:");
    scanf_s("%d",&disk);
    printf("disklerin ilk bulundugu cubuk:");
    scanf_s("%d",&icubuk);
    printf("Disklerin tasinacagi cubuk:");
    scanf_s("%d",&scubuk);
    printf("Disklerin tasinacagi gecici cubugu giriniz:");
    scanf_s("%d",&gcubuk);
    honoi(disk, icubuk, scubuk, gcubuk);


    return;
}