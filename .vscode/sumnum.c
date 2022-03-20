#include<stdio.h>
int sumnum(int);
int main()
{
    int n;
    printf("enter a numbrr");
    scanf("%d",&n);
    sumnum(n);
}

    int sumnum(int x)
    {
        int sum=0,r;
        while (x>0)
        {
          r=x%10;
          sum=sum+r;
          x=x/10;
        }
        printf("%d",sum);
    }
