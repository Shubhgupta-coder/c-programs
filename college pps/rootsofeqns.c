#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,discriminant,root1,root2;
    printf("enter cofficient of x*x,x,and constant term");
    scanf("%d%d%d",&a,&b,&c);
     discriminant=b*b-4*a*c;
     root1=(-b+ sqrt(discriminant))/(2*a);
    root2=(-b- sqrt(discriminant))/(2*a);
    printf("%d%d \n",root1,root2);
    
	return 0;
}
