#include<stdio.h>
int main()
{
    int i,n1,n2,sum,temp,r;
    printf("enter the first number");
    scanf("%d",&n1);
    printf("enter the second number");
    scanf("%d",&n2);

    for (i=n1+1;i<=n2-1;i++)
    {
        sum=0;
            temp=i;
        while (i>0)
        {
            r=i%10;
            sum=(sum*10)+r;
            i=i/10;
        }
            i=temp;
            if(i==sum)
            {
                printf("%d \n",i);
            }
    }
}
        