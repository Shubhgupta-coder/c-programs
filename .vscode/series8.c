// -1^4+3^4-5^4  //
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=1,r=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=(2*n-1) ;i=i+2)
    {
    r=r+pow(i,4)*pow(-1,j);
    j++;
    }
    printf("sum of series is %d",r);

}