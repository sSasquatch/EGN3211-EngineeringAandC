#include <stdio.h>

int main(void)
{
	int num_box = 0, weight, total = 0;
	
	while (num_box >= 0)
	{
		printf("Enter the numer of boxes: ");
		scanf("%d", &num_box);
		
		if (num_box < 0)
		{
			printf("\n");
			break;
		}
		
		printf("Enter box weight (lbs): ");
		scanf("%d", &weight);
		
		total = total + (num_box * weight);
		
		printf("\n");
	}
	
	printf("The total weight is %d lbs.\n", total);
	
	return 0;
}
