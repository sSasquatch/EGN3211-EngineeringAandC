#include <stdio.h>

int main(void) {
	int num, i;
	
	printf("Enter the number of stars: ");
	scanf("%d", &num);
	
	if(num >= 0) {
		for(i=0; i<num; i++)
			printf("*");
		printf("\n");
	}
	else
		printf("Invalid input!\n");
		
	return 0;
}