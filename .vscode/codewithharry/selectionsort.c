#include<stdio.h>
int main()
{
    int temp,n,i,j,min;
    int a[10];
    printf("enter the size of array \n");
    scanf("%d",&n);
    printf("enter the element in array");
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }

        for(i=0;i<n-1;i++)
        {
            min=i;
        
                for(j=i+1;j<n;j++)
                {
                    if(a[j]>a[min])
                    {
                        min=j;
                    }
                }
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
        }
        printf("the sorted array is \n ");
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }

}