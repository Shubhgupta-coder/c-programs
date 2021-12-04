#include <stdio.h>
// void swap(int*,int*);
void swap(int*a,int*b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main() {
	int x=34,y=74;
	printf("%d and %d\n",x,y);
	swap(&x,&y);
	printf("%d and %d\n",x,y);
	return 0;
}

