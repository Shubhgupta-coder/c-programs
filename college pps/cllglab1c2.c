#include <stdio.h>
// swapping of two element without using third element//
int main() {
	int a,b;
	
	printf("enter value of a and b \n");
	scanf("%d %d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("the value of a and b after swapping is %d %d", a,b);
	return 0;
}
