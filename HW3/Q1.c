#include <stdio.h>

int main(void)
{
	int num, count, i;
	
	printf("Enter a positive integer: ");
	scanf("%d", &num);

	printf("Enter up (1) or down (0): ");
	scanf("%d", &count);
	
	if (num <= 0)
	{
		printf("You have to enter a positive integer greater than 0.\n");
		return 1;
	}
	
	if (count == 0)
	{
		printf("\nCounting down:\n");
		for (i = num; i > 0; i--)
			printf("%d%c%c", i, (i > 1) ? ',' : '.', (i == 1) ? '\n' : ' ');
	}
	else if (count == 1)
	{
		printf("\nCounting up:\n");
		for (i = 1; i < num + 1; i++)
			printf("%d%c%c", i, (i < num) ? ',' : '.', (i == num) ? '\n' : ' ');
	}
	else
	{
		printf("You have to enter either (1) to count up or (0) to count down.\n");
		return 1;
	}
	
	return 0;
}
