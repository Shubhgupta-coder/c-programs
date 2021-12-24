#include <stdio.h>

int main() {
	int a,b,c,d,e,sum,per;
	printf("enter the marks of five subject");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	per=sum*100/500;
	printf("sum is %d",sum);
	printf("percentage is %d",per);
	return 0;
}