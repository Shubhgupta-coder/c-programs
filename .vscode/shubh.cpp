#include <stdio.h>
int seriessum(int n)
{
    if(n%2==0)
    {
        return (-(n/2));
    }
    else
    {
        return n-((n-1)/2);
    }
}
	
int main() {
	int n,sum=0;
	scanf("%d",&n);
    printf("the sum is %d ",seriessum(n));
    return 0;
}