#include <stdio.h>
#include <math.h>
void roots(int ,int,int);

int main() {
    int a,b,c;
    printf("enter cofficient of x*x,x,and constant term \n");
    scanf("%d%d%d",&a,&b,&c);
    roots(a,b,c);
    return 0;
}
    
    void roots(int a, int b, int c)
    {
      int  discriminant,root1,root2;
     discriminant=b*b-4*a*c;
    root1=(-b+ sqrt(discriminant))/(2*a);
    root2=(-b- sqrt(discriminant))/(2*a);
    printf("%d%d \n \n",root1,root2);
    }
	
