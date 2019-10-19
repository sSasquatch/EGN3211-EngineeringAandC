#include <stdio.h>

int main(void)
{
	int array[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
	int i, temp;
	
	printf("Array data\n");
	for (i = 0; i < 10; i++)
		printf("%d%c", array[i], (i == 9) ? '\n' : ' ');
	
	for (i = 0; i < 5; i++)
	{
		temp = array[i];
		array[i] = array[i + 5];
		array[i + 5] = temp;
	}
	
	printf("\nArray processing\n");
	for (i = 0; i < 10; i++)
		printf("%d%c", array[i], (i == 9) ? '\n' : ' ');
	
	return 0;
}
