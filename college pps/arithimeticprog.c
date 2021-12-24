#include <stdio.h>
// arithimetic progression series//

int main() {
	int a,n,d,i, sum=0;
	
	printf("enter first number \n");
	scanf("%d",&a);
	
	printf("enter common difference \n");
	scanf("%d",&d);
	
	printf("enter the number upto which you want to print series \n");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
	    printf("%d",a);
	    
	    sum=a+d;
	    a=sum;
	}
	return 0;
}