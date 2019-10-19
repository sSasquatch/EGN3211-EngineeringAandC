#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void array_analysis(int array[SIZE], int key)
{
	int count = 0, first, last, i;
	
	for (i = 0; i < SIZE; i++)
	{
		if (array[i] == key)
		{
			count++;
			last = i;
			if (count == 1)
				first = i;
		}
	}
	
	if (count == 0)
	{
		printf("First occurrence at index: NONE\n");
		printf("Last occurrence at index: NONE\n");
		printf("Total number of occurrences: %d\n", count);
	}
	
	printf("First occurrence at index: %d\n", first);
	printf("Last occurrence at index: %d\n", last);
	printf("Total number of occurrences: %d\n", count);
}

int main(void)
{
	int array[SIZE], i, key = 0;
	
	srand(time(NULL));
	
	printf("Array data\n");
	for (i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 5 + 1;
		printf("%d%c", array[i], (i == SIZE - 1) ? '\n' : ' ');
	}
	
	while (key < 1)
	{
		printf("Enter the key: ");
		scanf("%d", &key);
	}
	
	array_analysis(array, key);
	
	return 0;
}
