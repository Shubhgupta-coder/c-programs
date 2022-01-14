#include <stdio.h>

int main() {
	int i,n1,n2,r,c,sum,temp;
	printf("enter first number");
	scanf("%d",&n1);
    printf("enter second numbrer");
    scanf("%d",&n2);
	for (i=n1+1;i<=n2-1;i++)
    {
            sum=0;  
        	temp=i;
	
            while(i>0)
            {
                r=i%10;
                c=r*r*r;
                sum=sum+c;
                i=i/10;
            }
	         i=temp;
	    
	    if(i==sum)
	    {
	        printf("%d",i);
	    }
    }
	    
}