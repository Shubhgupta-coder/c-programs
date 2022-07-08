#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum=0,result[10][10];
    int i,j,m,n,p,q,k;
    printf("enter the number of rows and column in the first matrix ");
    scanf("%d %d",&m,&n);

    printf("enter the first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

        printf("the first matrix is \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d \t",a[i][j]);
            }
            printf("\n");
        }

        printf("enter the number of rows and column in the second matrix");
        scanf("%d %d",&p,&q);
         
            printf("enter the second matrix");
            for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }

                    printf("the second matrix is \n");
                    for(i=0;i<p;i++)
                    {
                        for(j=0;j<q;j++)
                        {
                            printf("%d \t",b[i][j]);
                        }
                        printf("\n");
                    }
                            for(i=0;i<m;i++)
                            {
                                for(j=0;j<q;j++)
                                {
                                    for(k=0;k<n;k++)
                                    {
                                        sum+=a[i][k]*b[k][j];
                                    }
                                    result[i][j]=sum;
                                    sum=0;
                                }
                            }

                            printf("the resultant matrix is \n");
                                for(i=0;i<m;i++)
                                {
                                    for(j=0;j<q;j++)
                                    {
                                        printf("%d \t",result[i][j]);
                                    }
                                        printf("\n");
                                }
}







