#include<stdio.h>
int main()
{
  int i,j,space,rows,x=1;
printf("enter the number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
    for(space=1;space<=rows-i;space++)
    {
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("%d",x);
        x++;
    }
    printf("\n");
}
}
 
