#include <stdio.h>

int main() {
	int i;
	
	printf("enter the value of i\n");
	scanf ("%d",&i);
	
	switch(i){
	    case 5:
	    printf("the value is 5");
	    break;
	    
	    case 0:
	    printf("the value is 8");
	    break;
	    
	    case 9:
	    printf("the value is 9");
	    break;
	    
	    default: 
	    printf("value is not present");
	    break;
	}
	return 0;
}