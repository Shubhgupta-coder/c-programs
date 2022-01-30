#include<stdio.h>
int changevalue(int *x, int *y)
{
    *x=34;
    *y=56;
    return(*x,*y);
  
}
int main()
{
    int a=4,b=5;
    printf("the value of a and b is now %d %d \n",a,b);
    changevalue(&a,&b);
    printf("the changed value of a and b is %d %d",a,b);
}
