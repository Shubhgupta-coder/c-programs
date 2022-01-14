#include<stdio.h>
int main()
{
    int j,n1,n2,i,count;
    printf("enter the value of n1");
    scanf("%d",&n1);

    printf("enter the value of n2");
    scanf("%d",&n2);

    printf("the prime number between %d and %d is:", n1,n2);
    for(i=n1+1;i<=n2-1;i++)
    {
        count=0;

        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
            if(count==2)
            {
                printf("%d ",i);
            }
    }
    return 0;
}

    