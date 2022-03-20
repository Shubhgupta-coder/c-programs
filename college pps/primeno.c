#include <stdio.h>
int main() {
	int i, num,count=0;
	printf("enter a number");
	scanf("%d",&num);
	
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
