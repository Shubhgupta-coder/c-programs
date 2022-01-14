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
        int n,i,j;
        

        printf("the prime nuber between 1 and 300 is");

        for(int i=2;i<=299;i++)
        {
            if(isprime(i)){
                printf("%d ",i);
            }
        }
        return 0;
    }

