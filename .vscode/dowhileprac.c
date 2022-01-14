#include <stdio.h>
int main()
{
    int n;
    char a;
    do
    {
       printf("enter the number");
       scanf("%d",&n);
       printf("the square of number is %d",n*n);
       printf("do you want another number y \n");
       scanf(" %c",&a);
    }
    while (a=='y');
    return 0;
}