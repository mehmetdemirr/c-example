#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct list{
	int data;
	list *next;
}list;
int main()
{
	list *ornek1,*ornek2,*ornek3;
	ornek1 = malloc(sizeof(list ));
	ornek2 = malloc(sizeof(list ));
	ornek3 = malloc(sizeof(list ));
	ornek1->data = 10;
	ornek1->next = ornek2;
	ornek2->data = 20;
	ornek2->next = ornek3;
	ornek3->data = 30;
	ornek3->next = NULL;
	while (ornek1->next != NULL)
	{
		printf("Deger:%d\n", ornek1->data);
		ornek1 = ornek1->next;
	}
	free(ornek1, ornek2, ornek3);
	return;
}
