#include <stdio.h>

int main(void)
{
	int i, j;
	
	for (i = 3; i < 8; i++)
		for (j = 0; j < 7; j++)
			printf("%d%d%c", i, j, (j != 6) ? ' ' : '\n');
	
	return 0;
}
