#include <stdio.h>
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);
void rem(int a,int b);
int main() 
{
	int a,b,ch=1,choice;
	printf("enter two number \n");
	scanf("%d%d",&a,&b);
	while(ch==1)
	{
	    printf("enter your choice press1:add press2:sub press3:multiplcation press4:division press5:remaindeer");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	        case 1:
	            add(a,b);
	            break;
	    
	        case 2:
	        	sub(a,b);
	        	break;
	    
            case  3:
                mul(a,b);
                break;
	        case 4:
	        	div(a,b);
	        	break;
	        case 5:
	            rem(a,b);
	            break;
	        default:
	            printf("you enter invalid number");
	            break;
        }
	
	    printf("if you want to continue press 1 otherwise enter any number");
	    scanf("%d",&ch);
	}
	return 0;
}

void add(int a,int b)
{
    int c;
    c=a+b;
    printf("sum is %d \n",c);
}

void sub(int a,int b)
{
    int d;
    d=a-b;
    printf("subtraction is %d \n",d);
}

void mul(int a,int b)
{
    int e;
    e=a*b;
    printf("multiplcation is %d \n",e);
}
void div(int a, int b)
{
    int f;
    f=a/b;
    printf("division is %d \n",f);
}

void rem(int a, int b)
{
    int g;
    g=a%b;
    printf("remaindeer is %d \n",g);
}


    


