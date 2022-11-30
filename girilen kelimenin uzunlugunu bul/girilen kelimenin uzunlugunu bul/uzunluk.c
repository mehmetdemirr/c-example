#include<stdio.h>
int main()
{
	char kelime[100];
	int i = 0;
	printf("Lutfen bir kelime giriniz:");
	gets(kelime);
	while (kelime[i] != '\0')
	{
		i++;
	}
	printf("'%s' kelimesi %d karekterden olusmaktadir.", kelime, i);
	return;
}