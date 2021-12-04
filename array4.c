#include <stdio.h>

void fun(int*ptr)
{
    for(int i=0; i<4; i++)
    {
    printf ("the value at %d is %d \n", i, *(ptr+i));
    }
    *(ptr+2)=6;
}
    


int main() {
    int arr[]={1,2,3,4};
    fun(arr);
    fun(arr); // if you change the value of array it get reflected in function //
    
	

	return 0;
}