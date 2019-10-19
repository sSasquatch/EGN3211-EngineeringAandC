#include <stdio.h>

char grade(int gp)
{
	if (gp >= 4)
		return 'A';
	else if (gp >= 3)
		return 'B';
	else if (gp >= 2)
		return 'C';
	else if (gp >= 1)
		return 'D';
	else
		return 'F';
}

int main(void)
{
	double class1, class2, class3, gpa;
	int num_scen = 0;
	
	printf("Scenarios where GPA >= 2.5\n\n");
	
	printf("EGN EEL EEE    GPA\n");
	printf("--------------------\n");
	
	for (class1 = 0; class1 <= 4; class1++)
	{
		for (class2 = 0; class2 <= 4; class2++)
		{
			for (class3 = 0; class3 <= 4; class3++)
			{
				gpa = (class1 + class2 + class3) / 3;
				if (gpa >= 2.5)
				{
					printf(" %c   %c   %c      %lf\n", grade(class1), \
						grade(class2), grade(class3), gpa);
					
					num_scen++;
				}
			}
		}
	}
	printf("Number of scenarios: %d\n", num_scen);
	
	return 0;
}
