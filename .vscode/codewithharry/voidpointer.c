#include<stdio.h>
int main()
{
    int a=3;
    float b=4.4;
    char c='u';
    void *shubh=&a;
    printf("the value of a is %d",*((int *) shubh));
    
    shubh=&b;       
    printf("the value of bis %f",*((float *) shubh));

    shubh=&c;
    printf("the value of c  is %c",*((char*) shubh));

}