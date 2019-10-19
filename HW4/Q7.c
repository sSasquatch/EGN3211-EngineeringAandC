#include <stdio.h>

int main(void)
{
	int x, y, z;
	
	for (x = 0; x <= 100; x++)
	{
		for (y = 0; y <= 100; y++)
		{
			for (z = 0; z <= 100; z++)
			{
				if ((float)(x * y * z) / (x + y + z) == 2)
					printf("(%d, %d, %d)\n", x, y, z);
			}
		}
	}
	
	return 0;
}
