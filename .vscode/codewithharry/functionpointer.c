#include<stdio.h>
int main()
{
    int d;
    int sum(int a,int b )
    {
        return (a+b);
    }

    int(*ptr)(int,int);
    ptr=&sum;
    d=(*ptr)(5,6);
    printf("sum is %d",d);


}