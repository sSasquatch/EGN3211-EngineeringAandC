#include <time.h>

#define SIZE 10

void array_analysis(int array[SIZE])
{
	int count = 0, i, max, second;
	
	max = array[0];
	count++;
	for (i = 1; i < SIZE; i++)
	{
		if (array[i] == max)
		{
			count++;
			continue;
		}
		
		if (array[i] > max)
		{
			second = max;
			max = array[i];
		}
	}
	
	printf("Maximum value: %d\n", max);
	if (count == SIZE)
		printf("All the values are equal.\n");
	else
		printf("Second largest value: %d\n", second);
}

int main(void)
{
	// int array[SIZE];
	int array[SIZE] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	int i;

	// srand(time(NULL));
	
	printf("Array data\n");
	for (i = 0; i < SIZE; i++)
	{
		// array[i] = rand() % 10 + 1;
		printf("%d%c", array[i], (i == SIZE - 1) ? '\n' : ' ');
	}
	
	array_analysis(array);
	
	return 0;
}
