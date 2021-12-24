#include <stdio.h>
//1*1+2*2+3*3+    n*n//
int main() {
	int number,sum=0;
	scanf("%d",&number);
	sum=(number*(number+1)*(2*number+1))/6;
	printf("the sum of series for %d = %d ", number, sum);
	return 0;
}
