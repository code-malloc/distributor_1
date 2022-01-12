#include <stdio.h>
#include "../header/distributor.h"

int menu()
{
	printf("\tДистрибутор\n");
	printf("\t1. Внести сумму\n");	
	printf("\t0. Закрыть программу\n\n");

	char num;
	printf("Выбирите пункт: ");
	scanf("%c", &num);
	printf("----------------------------------------\n\n");	

	switch(num)
	{
	case '1': distributor();break;
	case '0': printf("\nEXIT\n"); break;
	default: printf("\nERROR\n");
	}

	return 0;
}
