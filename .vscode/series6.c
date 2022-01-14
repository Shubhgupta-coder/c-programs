// 1+x/1-x^2/2+------+x^n/n //
#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,r=1;
    printf("enter the value of n and x");
    scanf("%d %d",&x,&n);

    for (i=1;i<=n;i++)
    {
        r=r-pow(-x,i)/i;
    }
    
printf("the sum of series is %d ",r);
}