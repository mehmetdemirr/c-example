#include<stdio.h>
#define DEGER 50
#define BOYUT 300
int main(void)
{
	char kelime[DEGER][BOYUT];
	int i,j=0,k;
	printf("Lutfen cumle giriniz(Cumleyi nokta ile bitiriniz.):\nCumleniz:");
	kelime[0][0] = 'z';
	for (i = 0; kelime[i][j] != '.'; i++)
	{
		for (j = 0; kelime[i][j] != ' '; j++)
			scanf("%c", &kelime[i + 1][j]);
		printf("%c", kelime[i][0]);
	}
	for (k = i; k >= 0; k--)
		printf("%c", kelime[k][0]);

	
	





	return;
}