#include<stdio.h>
int main()
{
    int a[5],max,min;
    printf("eneter element in array");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
        max=a[0] ;
        min=a[0];
        for(int i=0;i<=4;i++)
        {
            if (max<a[i])
            {
               max=a[i];
            }

              if (min>a[i])
            {
             min=a[i];
            }
            
        }
        printf("max. element of the array is %d",max);
        printf("min. element of the array is %d", min);

        
   
}