void fact(int n,int x);
#include<stdio.h>
#include<math.h>

void fact(int n, int x)
{
    int i=1,f=1;
    float sum1=0,sum2=0,sum=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
        if(i%2==0)
        sum1=sum+pow(x,i)/f;
        else
        sum2=sum-pow(x,i)/f;
    }
    sum=sum1+sum2;
    printf("%f ",sum);
}

int main()
{
    int n,x;
    printf("enter the value of x and n");
    scanf("%d %d",&x,&n);
    fact(n,x);
    return 0;
}
    

