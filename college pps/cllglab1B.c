#include <stdio.h>

int main() {
	int bs,da,hra,gs,pf,ns;
	printf("enter the basic salary \n");
	scanf("%d",&bs);
	
	da=(bs*25)/100;
	hra=(bs*15)/100;
	gs=bs+da+hra;
	pf=(gs*10)/100;
	ns=gs-pf;
	printf(" net salary is %d",ns);
	return 0;
}