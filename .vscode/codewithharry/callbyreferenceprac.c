#include<stdio.h>

 int add(int *x, int *y)
{
    int sum;
    sum=*x+*y;
  return(sum);
}

 int sub(int *e, int*f) 
{
    int minus;
    minus=*e-*f;
 return(minus);
}


int main()
{
    int a=3,b=4,c,d;
    printf("the value of a is now %d \n",a);
    printf("the value of b is now %d \n",b);
   c= add(&a,&b);
    d=sub(&a,&b);
    printf("the value of a is then %d \n",c); 
    printf("the value of b is then %d \n",d);
}

