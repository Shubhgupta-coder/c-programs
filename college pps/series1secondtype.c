#include <stdio.h>
//1+2+3++__ _ +n//
int main() {
	int i,num,sum=0;
	printf("enter the last element of the series ");
	scanf("%d",&num);
	sum=num/2*(num+1);
	printf("sum=%d ",sum);
	return 0;
}