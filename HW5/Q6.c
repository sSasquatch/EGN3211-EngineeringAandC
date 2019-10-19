#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void array_analysis(int array[SIZE])
{
	int values[11] = {0}, i;
	
	for (i = 0; i < SIZE; i++)
	{
		values[array[i]]++;
	}
	
	for (i = 0; i < 11; i++)
	{
		if (values[i] == 0)
			continue;
		printf("Value %d: %d times\n", i, values[i]);
	}
}

int main(void)
{
	int array[SIZE], i;

	srand(time(NULL));
	
	printf("Original data\n");
	printf("-------------\n");
	printf("Array: ");
	for (i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 11;
		printf("%d%c", array[i], (i == SIZE - 1) ? '\n' : ' ');
	}
	printf("\n");
	
	array_analysis(array);
	
	return 0;
}
