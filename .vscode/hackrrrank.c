#include<stdio.h>
int main() {
	
    int n,m,sum=0;
    printf("enter thje number");
    scanf("%d", &n);
    
        m=n%10;
        sum=sum+m;
        
        n=n/10;
        m=n%10;
        sum=sum+m;
         
         n=n/10;
        m=n%10;
         sum=sum+m;
         
         n=n/10;
           m=n%10;
         sum=sum+m;
         
         n=n/10;
           m=n%10;
         sum=sum+m;
         
    printf("sum is %d",sum);
    return 0;
}