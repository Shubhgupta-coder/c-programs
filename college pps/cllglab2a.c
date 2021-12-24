#include <stdio.h>
// ternary operator//
int main() {
	int num,x;
	printf("enter number \n");
	scanf("%d",&num);
	
    x=num%2==0?printf("even"):printf("odd");
    
	return 0;
}