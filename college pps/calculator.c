#include <stdio.h>
void add(int a,int b);
void sub(int a,int b);
void multiplcation(int a,int b);
void division(int a, int b);
void remaindeer(int a, int b);
int main() {
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	add(a,b);
	sub(a,b);
	multiplcation(a,b);
	division(a,b);
	remaindeer(a,b);
	return 0;
}

void add(int a, int b)
{
    int c;
    c=a+b;
    printf("sum is %d \n",c);
}

void sub(int a, int b)
{
    int d;
    d=a-b;
    printf("subtraction is %d \n",d);
}

void multiplcation(int a,int b)
{
    int e;
    e=a*b;
    printf("multiplcation is %d \n",e);
}

void division(int a, int b)
{
    int f;
    f=a/b;
    printf("division is %d \n",f);
}

void remaindeer(int a, int b)
{
    int g;
    g=a%b;
    printf("remaindeer is %d \n",g);
}

    


