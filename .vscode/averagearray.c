#include <stdio.h>

int main() {
	int avg,sum=0;
	int i;
	int marks[20];
	
	  printf("please enter your marks");
	for(i=0;i<=19;i++)
	{
	    scanf("%d",&marks[i]);
	}
	for(i=0;i<=19;i++)
	sum=sum+marks[i];
	avg=sum/20;
	printf("average marks=%d\n",avg);
	return 0;
}