#include <stdio.h>

    int  isprime(int num)
    int i,num,count=0;
    
    printf("enter the number");
	scanf("%d"&num);
	
	for(i=1;i<=num;i++)
	{
	    if(num%i==0)
	    {
	        count++;
	    }
	}
	    
	        if(count==2)
	        {
	            printf("prime number");
	        }
	            else
	            {
	                printf("not a prime number");
	            }
                	return 0;
                    }
                    
int main() {
    
    int n1,n2,i;
    printf ("enter first numer");
    scanf("%d",&n1);
    
    printf("enter second number");
    scanf("%d",&n2);
    
    printf("the prime number between %d and %d are", n1 and n2);
        for (i=n1;i<=n2;i++)
        {
            if(isprime(i))
            {
            printf("%d",i);
            }
        }
        return 0;
}
        
    
	