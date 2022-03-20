#include <stdio.h>

int main() {
int a[10][10],b[10][10],c[10][10];
int m,n,p,q,i,j,k ,sum=0;

    printf("enter teh first matrix \n");
    printf("enter the numbre of rows and column of first matrix \n");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("enter the %d %d element of first matrix \n",i,j);
          scanf("%d" ,&a[i][j]);
        }
    }

    printf("enter teh second matrix");
    printf("enter the numbre of rows and column of second matrix");
    scanf("%d %d",&p , &q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
             printf("enter the %d %d element of first matrix \n",i,j);
          scanf("%d", &b[i][j]);
        }
    }

    if(n!=p)
    {
        printf("matrix multiplication not possible");
    }

        else
        {
                for(i=0;i<m;i++)
                {
                    for(j=0;j<q;j++)
                    {
                      for(k=0;k<n;k++)
                        {
                             sum+=a[i][k]*b[k][j];
                         }
                            c[i][j]=sum;
                            sum=0;
                    }
                }

                printf("the resultant matrix \n");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<q;j++)
                    {
                        printf("%d \t", c[i][j]);
                    }
                    printf("\n");
                }

        }
	return 0;
}