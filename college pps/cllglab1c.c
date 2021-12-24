#include <stdio.h>
// swapping of two element using third element//
int main() {
	int a,b,c;
	printf("enter value of a and b \n");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	
	printf("the value of a and b after swapping is %d %d", a,b);
	return 0;
}