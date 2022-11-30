#include<stdio.h>
#include<stdio.h>
#define N 10
#define M 20
void main(void)
{
	char dizi[N][M], kelime[4];
	int i, j,k=0;
	printf("10 kelime her kelime en fazla 19 harf olacak sekilde giriniz:");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			scanf("%c", &dizi[i][j]);
			if (j == 19 || dizi[i][j] == '\t' || dizi[i][j] == '\n' || dizi[i][j] == ' ')
			{
				dizi[i][j] = '\0';
				break;
			}
		}
	}
	printf("Girigim cumle:");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M - 1; j++)
		{
			if (dizi[i][j] != '\0')
				printf("%c", dizi[i][j]);
			else
				break;
		}
		printf(" ");
	}
	printf("\n");
	printf("\nAranacak 3 harfli kelimeyi giriniz:");
	for (i = 0; i < 4; i++)
	{
		scanf("%c", &kelime[i]);
		if (i == 3 || kelime[i] == '\t' || kelime[i] == '\n' || kelime[i] == ' ')
		{
			kelime[i] = '\0';
			break;
		}
	}
	printf("Girdiginiz 3 harfli anahtar kelime:");
	for (i = 0; i < 3; i++)
		if (kelime[i] != '\0')
			printf("%c", kelime[i]);
	
}