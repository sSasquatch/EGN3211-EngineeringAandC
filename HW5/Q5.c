#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void array_analysis(int array[SIZE])
{
	int i, j;
	
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (array[j] == array[i])
				array[j] = -1;
		}
	}
}

int main(void)
{
	int array[SIZE];
	int i;

	srand(time(NULL));
	
	printf("Array data\n");
	for (i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 10 + 1;
		printf("%d%c", array[i], (i == SIZE - 1) ? '\n' : ' ');
	}
	
	array_analysis(array);
	
	printf("After processing\n");
	for (i = 0; i < SIZE; i++)
		printf("%d%c", array[i], (i == SIZE - 1) ? '\n' : ' ');
	
	return 0;
}
