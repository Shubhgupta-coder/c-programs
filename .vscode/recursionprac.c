#include<stdio.h>
int sumnum(int);
int main()
{
    int n,c;
    printf("enter a numbrr");
    scanf("%d",&n);
  c=  sumnum(n);
  printf("%d",c);
}

    int sumnum(int x)
    {
       int  r;
       r=x%10;
        if(r==x)
        {
            return r;
        }
        else
        {
            return (r+sumnum(x/10));
        }
    }