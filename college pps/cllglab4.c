#include <stdio.h>
#include <math.h>

int main() {
    int a,x,b,n;
    float y;
    printf ("enter value of a");
    scanf("%d",&a);
    
    printf("enter value of b");
    scanf("%d",&b);
    
    printf("enter value of x");
    scanf("%d",&x);
    
    printf("enter value of n");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1:
        {
           y=(a*x)%b; 
           printf("%f",y);
           break;
        }
        
        case 2:
        {
            y=(a*x*x)+b*b;
            printf("%f",y);
            break;
        }
        
        case 3:
        {
            y=a-b*x;
            printf("%f",y);
            break;
        }
        
        case 4:
        {
            y=a+(x/b);
            printf("%f",y);
            break;
        }
        
        default:
        printf("wrong value entered");
    }
    return 0;
}
        