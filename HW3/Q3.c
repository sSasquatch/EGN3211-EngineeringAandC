#include <stdio.h>

int main(void)
{
	int num = 0, min = 0;
	
	printf("Finding the minimum...\n");
	printf("Enter integers (-1 to finish)\n\n");
	
	while (num != -1)
	{
		printf("Integer: ");
		scanf("%d", &num);
		
		if (min == 0)
			min = num;
		else if (num < min && num > -1)
			min = num;
	}
	
	if (min == -1)
		printf("No data has been entered.\n");
	else
		printf("The minimum value is: %d\n", min);
	
	return 0;
}
