#include<stdio.h>
int main()
{
    int a=76;
    int *ptr ;
    ptr=&a;
    int **ptr1 =&ptr;
    int *shubh ;
    shubh=NULL;
    printf("valur of a is %d \n ",a);
    printf("the value of a is %d \n",*ptr);
     printf("the value of a is %d \n",**ptr1);

    printf(" the adress of a is %d \n", &a);
    printf(" the adress of a is %d \n", ptr);

    printf("the adrss of ptr is %d \n",&ptr);
    printf(" the adress of ptr is %d \n", ptr1);

    printf(" the value of ptr is %d \n", ptr);
    printf("the value of ptr is %d \n", *ptr1);  

    printf(" the value of ptr1 is %d \n",ptr1);  

    printf(" the value of garbager is%d",shubh);
}