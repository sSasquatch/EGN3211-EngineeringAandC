#include <stdio.h>

int main(void)
{
	int num = 0, max1 = 0, max2 = 0, count = 0;
	
	while (num != -1)
	{
		printf("Enter integer: ");
		scanf("%d", &num);
		
		if (num >= 0)
		{
			if (num > max1)
			{
				max2 = max1;
				max1 = num;
			}
			else if (num > max2 && num < max1)
				max2 = num;
			count++;
		}
		else if (num < -1)
			count++;
	}
	
	if (count < 2)
		printf("You have only entered one value.\n");
	else
		printf("The two largest value are: %d and %d\n", max2, max1);
	
	return 0;
}