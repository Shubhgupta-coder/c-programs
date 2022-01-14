#include<stdio.h>
int main()
{
    int x,y,i,z=1;
    
    printf("enter the valur of x and y");
    scanf(" %d %d",&x,&y);
        for (i=1;i<=y;i++)
        {
         z=z*x;
        }
    printf("the value of x^y is % d", z);
}
    
    
