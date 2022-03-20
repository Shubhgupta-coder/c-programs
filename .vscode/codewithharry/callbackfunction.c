#include<stdio.h>
 int sum(int a, int b)
 {
     return(a+b);
 }

 void greethello(int(*ptr1)(int,int))
 {
     printf("hello sir");
     printf("the sum of 5 and 7 is %d",(*ptr1)(5,7));
 }

 void greetgoodevening(int(*ptr1)(int,int))
 {
     printf("good evening  sir");
     printf("the sum of 5 and 7 is %d",(*ptr1)(5,7));
 }

 int main()
 {
     int(*ptr)(int,int);
     ptr=&sum;
     greethello(ptr);
 }