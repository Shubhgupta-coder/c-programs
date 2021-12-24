#include <stdio.h>
//1*1+2*2+3*3+    n*n//
int main() {
	int i,n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    sum=sum+i*i;
	}
	 printf("the sum is %d",sum);
	return 0;
}