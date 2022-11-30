#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void paraAt()
{
	int sonuc;
	sonuc = 1+rand() % 2;
	if (sonuc == 1)
	{
		printf(" yazi");
		//return 0;
	}
	else if(sonuc==2)
	{
		printf(" tura");
		//return 1;
	}
}
int main()
{
	srand(time(NULL));
	int adet,i,tura_t=0,yazi_t=0;
	printf("Lutfen kac kez madeni para atacaginiz giriniz:");
	scanf_s("%d", &adet);
	for (i = 1; i <= adet; i++)
	{
		printf("\n%d. atis:", i);
		paraAt();
		/*
		if (paraAt() == 0)
		{
			printf("yazi");
			yazi_t++;
		}
		else if(paraAt()==1)
		{
			printf("tura");
			tura_t++;
		}
		*/
	}
	//printf("\n\nTura adedi:%d", tura_t);
	//printf("\nYazi adedi:%d", yazi_t);

	return;
}