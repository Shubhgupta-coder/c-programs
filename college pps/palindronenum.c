#include <stdio.h>
// palindrome number program //

int main() {
	int n,r,sum=0, temp;
	
	printf("enter a number \n");
	scanf("%d",&n);
	
	temp=n;
	
	while(n>0)
	{
	    r=n%10;
	    sum=(sum*10)+r;
	    n=n/10;
	}
	
	n= temp;
	
	if(n==sum)
	{
	    printf (" number is palindrome number");
	}
	
	else
	{
	printf(" number is not a palindrome number");
	}

	return 0;
}