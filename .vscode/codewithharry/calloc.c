#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,n;
printf("enter the size of array you want to create");
scanf("%d",&n);
ptr =(int *)calloc(n,sizeof(int) );
    //for (int i=0;i<n;i++)
    //{
    //    printf("enter the value of %d of the array \n",i);//if we do not take input then calloc will initialise the allocated memory with 0 //   
     //   scanf("%d",&ptr[i]);
    //
   // }
    for(int i=0;i<n;i++)
    {
        printf("the value of %d of the array is %d \n",i,ptr[i]);
    }
}