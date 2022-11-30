#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 10
#define M 20
void main(void)
{
	int i=0, j;
	char kelime[N][M],ara[4];
	printf("Lutfen bir 10 kelimelik bir cumle giriniz:");
	while (i<N)
	{
		scanf("%s",kelime[i]);
		i++;
	}
	printf("En fazla 3 harfli bir kelime giriniz:");
	scanf("%s", ara);
	printf("\nGirdiginiz cumle:");
	for (i = 0; i < N;i++)
		printf("%s ", kelime[i]);
	printf("\nAranacak kelime:%s", ara);
	printf("icerisinde %s kelimesi bulunan kelimeler:\n",ara);
	for (i = 0; i < N; i++)
		if (strstr(kelime[i], ara))
			printf("%s\n", kelime[i]);
}