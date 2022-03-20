#include<stdio.h>
int main()
{
    int a[5],count,j;
    printf("entrer element in arary");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
        
    }

    for (int i = 0; i < 5; i++)
    {
        count=0;
        for (int j = 1; j<=a[i]; j++)
        {
           if(a[i]%j==0)
           {
               count++;
           }
        }
         if(count==2)
            {  
              printf("prime no. in arrray are %d \n",a[i]); 
             }
    }
   
}
            
        
        

    


    
