#include<stdio.h>

int isprime(int n){
    for(int j=2; j*j<=n; j++)
    {
        if(n%j==0)
        return 0;
    }
    return 1;
    }

    int main(){
        int n,n1,n2,i,j;
        printf("enter the first number");
        scanf("%d",&n1);

        printf("enter the second number");
        scanf("%d",&n2);

        printf("the prime nuber between %d and %d is:" ,n1 , n2);

        for(int i=n1+1;i<=n2-1;i++)
        {
            if(isprime(i)){
                printf("%d ",i);
            }
        }
        return 0;
    }

