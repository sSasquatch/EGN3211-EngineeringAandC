#include <stdio.h>

int main(void)
{
	int x;
	float y;
	
	printf("The function is: y=(2/x) + 3\n\n");
	printf("x\ty\ty\t\ty\n");
	printf("--------------------------------------------\n");
	
	for (x = 1; x <= 10; x++)
	{
		y = ((float) 2 / x) + 3;
		printf("%d\t%.2f\t%.4f\t\t%e\n", x, y, y, y);
	}
	
	return 0;
}
