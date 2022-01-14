// 1!+2!+3!-----//
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=1,n,f=1,r=0;;
    printf("enter the vaklue of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        while (j<=i)
        {
        f=f*j;
        j++;
        }
        r=r+f;
    }
    printf("the sum of seriews is %d",r);
}

    
