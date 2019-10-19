#include <stdio.h>

int main(void)
{
	int i, num, min = 0;
	
	for (i = 1; i < 4; i++)
	{
		printf("** Starting Series %d **\n", i);
		
		printf("Enter the integers: ");
		scanf("%d", &num);
		min = num;
		while (num != -1)
		{
			scanf("%d", &num);
			if (num < -1)
			{
				continue;
			}
			else if (num > -1)
			{
				if (num < min)
					min = num;
			}
		}
		
		printf("The minimum number is: %d\n\n", min);
	}
	
	return 0;
}
