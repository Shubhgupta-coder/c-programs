#include <stdio.h>

int add (int*x,int*y)
 {
     int sum;
    sum=*x+*y;
    return (sum);
}
 
int sub (int*x,int*y)
 {
     int subtraction ;
    subtraction=*x-*y;
     return (subtraction);
 }
 
 
 int a=3,b=4;
int main() {
    
	int c ,d;
	printf("the value of a is %d\n",a);
	printf("the value of b is %d\n",b);
	c=add(&a,&b);
	d=sub(&a,&b);
   	printf("the value of a is then %d\n",c);
   	printf("the value of b is then %d\n",d);
	
	return 0;
	
}

