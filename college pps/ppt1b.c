#include <stdio.h>
 // addition  subtraction multiplication  division  and modulo in a single programm //
int main() {
	int a, b ,c, ch ;
	
	printf (" enter value of a and b ");
	scanf ("%d %d \n", &a, &b);
	
	printf("enter value of ch");
	scanf("%d \n",&ch);
	
	if(ch==1)
	{
	    c=a+b;
	    printf("%d \n",c);
	}
	
	if(ch==2)
	{
	   c=a-b;
	   printf("%d \n",c);
	}
	
	if(ch==3)
	{
	    c=a*b;
	    printf("%d \n",c);
	}
	    
	    if(ch==4)
	    {
	        c=a/b;
	        printf("%d \n",c);
	    }
	    
	    if(ch==5)
	    {
	        c=a%b;
	        printf("%d \n",c);
	    }
	return 0;
}