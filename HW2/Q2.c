#include <stdio.h>

int main(void) {
	int i=0, j=0;
	
	while(i <= 10) {
		printf("%d ", i);
		i++;
	}
	printf("\n");
	
	i = 0;
	while(i <= 10) {
		if(i % 2 == 0)
			printf("%d ", i);
		printf("%d ", i);
		i++;
	}
	printf("\n");
	
	return 0;
}