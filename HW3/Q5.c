#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x = 0, y = 0;
	int num1, num2, num3, num4, num5, num6, num7, num8;
	
	srand(time(0));
	
	while (x == 0 || x == 1)
		x = rand() % 10;
	while (y == 0 || y == 1)
		y = rand() % 10;
	num1 = rand() % 10;
	num2 = rand() % 10;
	num3 = rand() % 10;
	num4 = rand() % 10;
	num5 = rand() % 10;
	num6 = rand() % 10;
	num7 = rand() % 10;
	num8 = rand() % 10;
	
	printf("%d%d%d-%d%d%d-%d%d%d%d\n", x, num1, num2, y, num3, num4, \
		num5, num6, num7, num8);
	
	return 0;
}
