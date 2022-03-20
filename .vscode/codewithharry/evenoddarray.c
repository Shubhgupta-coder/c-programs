#include<stdio.h>
int main()
{
    int a[5],b[5],c[5], sume=0,sumo=0,i,j=0,k=0;
    printf("enter the element in aray");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
       
        if(a[i]%2==0)
        {
            //printf("even element of array is %d \n",a[i]);
            //sume=sume+a[i];
            b[j]=a[i];
            j++;
        }
    }
    //printf("sum of all even element in array is %d",sume);

            for (int i = 0; i < 5; i++)
            {
               
                if(a[i]%2!=0)
                {
                   // printf("odd element of array is %d \n",a[i]);
                  // sumo=sumo+a[i];
                  c[k]=a[i];
                  k++;
                }
            }
           // printf("sum of odd element in array is %d",sumo);
           printf("array of even element in a array \n");
           for (int  i = 0; i < j; i++)
           {
               
               printf("%d \n",b[i]);
           }

           printf("array of odd element in a array \n");
           for (int  i = 0; i < k; i++)
           {
               
               printf("%d \n",c[i]);
           }
           
}
    