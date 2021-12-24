#include <stdio.h>

int main() {
	int n,a=0,b=1,i=3,c;
	printf("enter value of n");
	scanf("%d",&n);
	printf("first and second number %d%d",a,b);
	while(i<=n)
	{
	    c=a+b;
	    printf("%d",c);
	    a=b;
	    b=c;
	    i++;
	    
	}
	return 0;
}