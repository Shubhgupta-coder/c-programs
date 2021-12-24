#include <stdio.h>
// reverse number program //
int main() {
	int n,r,sum=0;
	
	
	printf("enter a number \n");
	scanf("%d",&n);
	
	while(n>0)
	{
	    r=n%10;
	    sum=(sum*10)+r;
	    n=n/10;
	}
	
	printf("reverse numer is %d \n ", sum);
	return 0;
}