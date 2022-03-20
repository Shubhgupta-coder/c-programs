#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
    
    srand(time(NULL));
    rand()%100;
    printf("the random number between 0 and 100 is %d",rand()%100);
}  