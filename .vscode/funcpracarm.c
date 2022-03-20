#include<stdio.h>
int armstrong(int);


    int armstrong(int x)
    {
        int c,r,sum=0,temp;
        temp=x;
        while (x>0)
        {
        r=x%10;
        c=r*r*r;
        sum=sum+c;
        x=x/10;
        }
        x=temp;
        if(x==sum)
        {
            printf("armstrong number");
        }
        else{
            printf("not an armstrong number");
        }
    }
    
        
    
