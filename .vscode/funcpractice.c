#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter two numbr");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    
}

add(int x , int y)
{
    int c;
c=x+y;
printf("sum is %d",c);
return c;
}
