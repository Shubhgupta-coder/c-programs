#include <stdio.h>
void prime(int numb);
int main() {
    int numb;
    printf("enter a number");
    scanf("%d",&numb);
    prime(numb);
	return 0;
}

void prime(int numb)
{

	int i,count=0;
	
	for(i=1;i<=numb;i++)
	{
	    if(numb%i==0)
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
}
                