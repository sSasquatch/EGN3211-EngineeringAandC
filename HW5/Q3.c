#include <stdio.h>

#define SIZE 5

void array_analysis(int array1[SIZE], int array2[SIZE], int array3[SIZE])
{
	int same = 0, i;
	
	for (i = 0; i < SIZE; i++)
	{
		if (array1[i] != array2[i] || array1[i] != array3[i] || array2[i] != array3[i])
			same = 1;
	}
	
	if (same == 1)
		printf("\nThese arrays are not identical!\n");
	else if (same == 0)
		printf("\nThese arrays are identical!\n");
}

int main(void)
{
	int array1[SIZE] = {1, 2, 3, 4, 5}, array2[SIZE] = {1, 2, 3, 4, 5};
	int array3[SIZE] = {1, 2, 3, 4, 5};
	// int array1[SIZE] = {1, 2, 3, 4, 5}, array2[SIZE] = {1, 2, 3, 4, 5};
	// int array3[SIZE] = {6, 7, 8, 9, 10};
	int i;
	
	printf("Array A: \n");
	for (i = 0; i < SIZE; i++)
		printf("%d%c", array1[i], (i == SIZE - 1) ? '\n' : ' ');
	
	printf("Array B: \n");
	for (i = 0; i < SIZE; i++)
		printf("%d%c", array2[i], (i == SIZE - 1) ? '\n' : ' ');
	
	printf("Array C: \n");
	for (i = 0; i < SIZE; i++)
		printf("%d%c", array3[i], (i == SIZE - 1) ? '\n' : ' ');
	
	array_analysis(array1, array2, array3);
	
	return 0;
} 
