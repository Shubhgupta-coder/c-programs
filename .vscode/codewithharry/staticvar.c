#include<stdio.h>
int func1(int);
int b=4;
int main()
{
    int b=6,c;
    //printf("the adresss of b inside main function is %d \n",&b);
 // c=  func1(b);
  c=  func1(b);
   c= func1(b);
    //func1(b);
    printf("the value of function func 1 is %d",c);
  return 0;
}


int func1(int b)
{
     static int  var=5;
    //printf("the value of b is %d \n",b);
  //  printf("the adresss of b inside func1 function is %d \n",&b);
  printf("the value of var is %d",var);
  var++;
  return (var+b);
}