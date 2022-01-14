#include<stdio.h>
int main()
{
    int i,j,rows;
    for(i=3;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}