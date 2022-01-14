#include <stdio.h>

int main() {
    int n, a=0,i,b=1 ,c;
    
    printf("enter the number up to which you want to print fibonacci series");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        
        c=a+b;
        a=b;
        b=c;
        
    }
    
	return 0;
}