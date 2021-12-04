#include<stdio.h>

int main()
{
	//One dimensional array
	int marks[5], sum=0;
	printf("Enter marks of 10 students : \n\n");
	for (int i=0;i<=4;i++)
	{
	printf("Marks of %d student : ", i+1);
	scanf("%d", &marks[i]);
	sum += marks[i];
	}

	int average = sum/5;
	printf("\nThe average marks of 10 students are %d", average);
	return 0;
}