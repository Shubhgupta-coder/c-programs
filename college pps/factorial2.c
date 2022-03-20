#include<stdio.h>
int factorial(int);
int main()
{
	int num;
	printf("enter the number you want factorial of\n");
	scanf("%d", &num);
	printf("the factorial of %d is %d \n" ,num,factorial(num));
	return 0; 
    
}

int factorial(int number)
{
    
    if (number==1 || number==0)
    {
        return 1;
    }
    else
    {
        return (number* factorial(number-1));
    }
}