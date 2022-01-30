#include<stdio.h>
int main()

{
    int i,j,k,sum=0;
   int  a[3][4],b[4][2],c[3][2];
   
   printf("enter your first matrix \n");
   for(int i=0;i<3;i++)
   {
       for(j=0;j<4;j++)
       {
           printf("enetr the %d %d element of your firsts matrix",i,j);
           scanf("%d",&a[i][j]);

       }
   }

   printf("enter your second matrix \n");
   for(int i=0;i<4;i++)
   {
       for(j=0;j<2;j++)
       {
           printf("enetr the %d %d element of yoursecond matrix ",i,j);
           scanf("%d",&b[i][j]);
       }
   }
  
   //printf("enter the resultant matrix");
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<2;j++)
      {
        for(int k=0;k<4;k++)
        {
            sum+=a[i][k]*b[k][j];
        }
        c[i][j]=sum;
        sum=0;
      }
   }
   printf("resultant matrix is \n ");
   for(i=0;i<3;i++)
   {
     for(j=0;j<2;j++)
     {
       printf("%d \t",c[i][j]);
     }
     printf("\n");
   }
}