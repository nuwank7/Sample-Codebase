#include <stdio.h>
int main(void)
{
	int count = 1, grade= 0, total = 0;
	float average;
	
	printf("Enter -1 to terminate the program \n");

	// grade should have a value here
	while (grade != -1)
	{
		printf("Enter grade: ");
		scanf("%d", &grade);
		total = grade + total;
		count++;

    // get a new value for grade
	}
	
	average = (float)total / count;
	
	printf("Average is %.2f", average);
	
	return 0;
}