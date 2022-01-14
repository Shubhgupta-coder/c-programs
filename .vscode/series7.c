// x^1-x^3+x^5----  //
#include<stdio.h>
#include<math.h>
 int main()
 {
     int x,n,i,r=0,j=1;
     printf("enter the vsalue of x and n");
     scanf("%d %d",&x,&n);
        for(i=1;i<=( 2*n-1);i=i+2)
        {
            r=r-pow(x,i)*pow(-1,j);
            j++;
        }
        printf("sum of series is %d",r);
    
 }