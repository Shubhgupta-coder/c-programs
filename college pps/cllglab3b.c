#include <stdio.h>

int main() {
	int m,p,c,tmp,total;
	printf("enter marks of maths");
	scanf("%d",&m);
	printf("enter marks of physics");
	scanf("%d",&p);
	printf("enter marks of chemistry");
	scanf("%d",&c);
	tmp=m+p;
	total=m+p+c;
	if(p>40&&c>50&&m>60&&tmp>150||total>200)
	{
	    printf("eligible");
	}
	else{
	    printf("not eligible");
	}
	return 0;
}