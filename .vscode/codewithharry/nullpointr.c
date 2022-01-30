#include<stdio.h>
int main()
{
    int a=2;
    int *ptr= &a;
    printf("the adrees of a garbage is %d",ptr);//for null pointer
    if(ptr!=NULL)
    {
        printf("ther adreess of a is %d",ptr);
    }
    else{
        printf("it is a null pointer and it cannot be dereffernced");
    }
}