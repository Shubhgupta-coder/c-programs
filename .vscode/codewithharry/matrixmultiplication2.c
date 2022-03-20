#include<stdio.h>
int main()
{
    int m,n,m1,n1,sum=0,i,j,k;
    printf("enter the number of rows in first matrix \n");
    scanf("%d",&m);
    printf("enter the number of coulumn in first matrix \n");
    scanf("%d",&n);
    printf("enter the number of rows in second matrix \n");
    scanf("%d",&m1);
    printf("enter the number of coulumn in second matrix \n");
    scanf("%d",&n1);
    int a[m][n],b[m1][n1],c[m][n1];
    printf("enter your first matrix \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("enter the %d %d element of first matrix \n",i,j);
                scanf("%d",&a[i][j]);
            }
        }
    

             printf("enter your second matrix \n");
            for(i=0;i<m1;i++)
            {
                for(j=0;j<n1;j++)
                {
                    printf("enter the %d %d element of first matrix \n",i,j);
                    scanf("%d",&b[i][j]);
                }
            }

            for(i=0;i<m;i++)
            {
                for(j=0;j<n1;j++)
                {
                    for(k=0;k<n;k++)
                    {
                        sum+=a[i][k]*b[k][j];
                       
                    }
                     c[i][j]=sum;
                     sum=0;
                }
            }
            printf("resultant  matrix \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n1;j++)
                {
                    printf("%d \t",c[i][j]);
                }
                printf("\n");
            }
}


  