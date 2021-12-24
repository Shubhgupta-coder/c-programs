#include <stdio.h>
//geometric progression\\

int main() {
    int a,r,n,i,product;
    
    printf("enter first number \n");
    scanf("%d",&a);
    
    printf("enter common ratio \n");
    scanf("%d",&r);
    
    printf("enter the number upto which you want to print series \n") ;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        product=a*r;
        a=product;
    }
	return 0;
}