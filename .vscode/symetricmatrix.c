#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],m,n,i,j,count=0;
    printf("emter the number of rows");
    scanf("%d",&m);
     printf("emter the number of column");
    scanf("%d",&n);
    printf("enter the matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           b[j][i]=a[i][j];
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
              count++;
            }
        }
    }
    if(count==0)
    {
        printf("symmetric matrix");
    }
    else
    {
        printf("not symmetric matrix");
    }
}