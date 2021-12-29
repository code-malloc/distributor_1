#include <stdio.h>
#include "../../header/income.h"
#include "../../header/black_day.h"

int distributor()
{
	int sum = 0;

	printf("Сумма:  ");
	scanf("%d", &sum);

	income(sum);
	black_day(sum);

	return 0;
}
