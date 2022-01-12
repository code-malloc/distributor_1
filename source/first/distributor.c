#include <stdio.h>
#include "../../header/income.h"
#include "../../header/black_day.h"

int distributor()
{
	int sum;

	printf("Введите сумму: ");
	scanf("%d", &sum);

	income(sum);
	black_day(sum);

	return 0;
}
