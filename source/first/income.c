#include <stdio.h>
 
int income(int sum)
{
	/* создание файла */
	FILE *file;
	const char *filename = "source/txt/income.txt";
	const char *mode = "a";
	file = fopen(filename, mode);

	/* запись инфо. в файл black_day.txt*/
	fprintf(file, "%d ", sum);

	fclose(file);

	return sum;
}
