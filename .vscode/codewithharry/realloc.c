#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,n,n1;
printf("enter the size of array you want to create");
scanf("%d",&n);
ptr =(int *)malloc(n*sizeof(int) );
    for (int i=0;i<n;i++)
    {
        printf("enter the value of %d of the array \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("the value of %d of the array is %d \n",i,ptr[i]);
    }

    printf("enter the size of new array you want to create");
    scanf("%d",&n1);
    ptr=(int *)realloc(ptr,n1*sizeof(int));
    ptr =(int *)calloc(n,sizeof(int) );
    for (int i=0;i<n1;i++)
    {
        printf("enter the value of %d of the array \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n1;i++)
    {
        printf("the value of %d of the array is %d \n",i,ptr[i]);
    }
    
}