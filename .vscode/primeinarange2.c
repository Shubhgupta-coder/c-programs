#include<stdio.h>

int isprime(int num)
{
    int count=0;
	for(int j=1; j<=num; j++)
	{
	    if(num%j==0)
	    {
	        count++;
	    }
	}
	     if(count==2)
         {
                return 1;
         }
         return 0;

    }
            
          int main(){
             int j,n1,n2,i,num;
             printf("enter the first number");
             scanf("%d",&n1);

             printf("enter the second number");
             scanf("%d",&n2);

             printf("the prime nuber between %d and %d is:" ,n1 , n2);

             for(int i=n1+1;i<=n2-1;i++)
              {
                 if(isprime(i)){
                   printf("%d ",i);
                }
             }
        return 0;
    }

