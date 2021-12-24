#include<stdio.h>

int main() {
	int year;
	printf("enter the year ");
	scanf("%d",&year);
	
	year%4==0||year%400==0&&year%100!=0;
	printf("the given year  is leap year",year);
	printf("the given year is not a leap year",year);
	return 0;
}